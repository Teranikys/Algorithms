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
	inputSlice := strings.Split(input, " ")
	var numbers []int
	for _, str := range inputSlice {
		num, _ := strconv.Atoi(str)
		numbers = append(numbers, num)
	}

	var ans int
	for i := 0; i < len(numbers)-2; i++ {
		last, curr, next := numbers[i], numbers[i+1], numbers[i+2]
		if curr > next && curr > last {
			ans++
		}
	}
	fmt.Println(ans)
}
