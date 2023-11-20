package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	input, _ := reader.ReadString('\n')
	input = strings.TrimSpace(input)
	a, _ := strconv.Atoi(input)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	b, _ := strconv.Atoi(input)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	c, _ := strconv.Atoi(input)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	d, _ := strconv.Atoi(input)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	e, _ := strconv.Atoi(input)

	if d > e {
		d, e = e, d
	}

	if a > b {
		a, b = b, a
	}
	if b > c {
		b, c = c, b
	}
	if a > b {
		a, b = b, a
	}

	if d >= a && e >= b {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
