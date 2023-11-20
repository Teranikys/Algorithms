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

	numbers, _ := reader.ReadString('\n')
	numbers = strings.TrimSpace(numbers)
	splitInput := strings.Split(numbers, " ")
	var lis []int
	for _, elem := range splitInput {
		intElem, _ := strconv.Atoi(elem)
		lis = append(lis, intElem)
	}

	flag := true

	for i := 0; i < len(lis)-1; i++ {
		if lis[i] >= lis[i+1] {
			flag = false
			break
		}
	}

	if flag {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
