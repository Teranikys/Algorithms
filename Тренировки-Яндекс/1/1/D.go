package main

import (
	"bufio"
	"fmt"
	"math"
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

	if a == 0 {
		if b == c*c {
			fmt.Println("MANY SOLUTIONS")
		} else {
			fmt.Println("NO SOLUTION")
		}
	} else {
		if (c*c-b)%a == 0 {
			x := (c*c - b) / a

			if a*x+b < 0 || c < 0 {
				fmt.Println("NO SOLUTION")
			} else if math.Sqrt(float64(a*x+b)) == float64(c) {
				fmt.Println(x)
			} else {
				fmt.Println("NO SOLUTION")
			}
		} else {
			fmt.Println("NO SOLUTION")
		}
	}
}
