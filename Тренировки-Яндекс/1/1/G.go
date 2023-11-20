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

	n, _ := strconv.Atoi(splitInput[0])
	k, _ := strconv.Atoi(splitInput[1])
	m, _ := strconv.Atoi(splitInput[2])

	var ans int

	//ans = n / (k - k%m) * (k / m)

	if k >= m {
		for n > k {
			n = n - k + k%m
			ans += k / m
		}

		ans += k * (n / k) / m
	}

	fmt.Println(ans)
}
