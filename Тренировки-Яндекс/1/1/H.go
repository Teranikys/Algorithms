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

	min1 := a*(c-1) + c
	max1 := min1 + 2*a
	min2 := b*(d-1) + d
	max2 := min2 + 2*b

	var ans1, ans2 int

	if min1 > min2 {
		ans1 = min1
	} else {
		ans1 = min2
	}

	if max1 < max2 {
		ans2 = max1
	} else {
		ans2 = max2
	}

	if ans2 < ans1 {
		fmt.Println(-1)
	} else {
		fmt.Println(ans1, ans2)
	}
}
