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

	if a+b > c && a+c > b && b+c > a {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
