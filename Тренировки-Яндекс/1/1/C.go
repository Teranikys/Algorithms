package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	var numbers []string

	input, _ := reader.ReadString('\n')
	input = strings.TrimSpace(input)
	input = strings.Replace(input, "(", "", -1)
	input = strings.Replace(input, ")", "", -1)
	input = strings.Replace(input, "-", "", -1)
	input = strings.Replace(input, "+", "", -1)
	if len(input) == 11 {
		input = input[1:]
	}
	a := input

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	input = strings.Replace(input, "(", "", -1)
	input = strings.Replace(input, ")", "", -1)
	input = strings.Replace(input, "-", "", -1)
	input = strings.Replace(input, "+", "", -1)
	if len(input) == 11 {
		input = input[1:]
	}
	numbers = append(numbers, input)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	input = strings.Replace(input, "(", "", -1)
	input = strings.Replace(input, ")", "", -1)
	input = strings.Replace(input, "-", "", -1)
	input = strings.Replace(input, "+", "", -1)
	if len(input) == 11 {
		input = input[1:]
	}
	numbers = append(numbers, input)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	input = strings.Replace(input, "(", "", -1)
	input = strings.Replace(input, ")", "", -1)
	input = strings.Replace(input, "-", "", -1)
	input = strings.Replace(input, "+", "", -1)
	if len(input) == 11 {
		input = input[1:]
	}
	numbers = append(numbers, input)

	for _, number := range numbers {
		if number == a {
			fmt.Println("YES")
		} else if a[0:3] == "495" && a[3:] == number {
			fmt.Println("YES")
		} else if number[0:3] == "495" && number[3:] == a {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
