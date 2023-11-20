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

	numbers, _ := reader.ReadString('\n')
	numbers = strings.TrimSpace(numbers)
	splitInput := strings.Split(numbers, " ")

	x1, _ := strconv.Atoi(splitInput[0])
	y1, _ := strconv.Atoi(splitInput[1])
	x2, _ := strconv.Atoi(splitInput[2])
	y2, _ := strconv.Atoi(splitInput[3])

	var ans []float64
	ans = append(ans, 1000000)
	ans = append(ans, 1000000)

	if float64(x1+x2)*math.Max(float64(y1), float64(y2)) < ans[0]*ans[1] {
		ans[0] = float64(x1 + x2)
		ans[1] = math.Max(float64(y1), float64(y2))
	}
	if float64(x1+y2)*math.Max(float64(y1), float64(x2)) < ans[0]*ans[1] {
		ans[0] = float64(x1 + y2)
		ans[1] = math.Max(float64(y1), float64(x2))
	}
	if float64(y1+y2)*math.Max(float64(x1), float64(x2)) < ans[0]*ans[1] {
		ans[0] = float64(y1 + y2)
		ans[1] = math.Max(float64(x1), float64(x2))
	}
	if float64(y1+x2)*math.Max(float64(x1), float64(y2)) < ans[0]*ans[1] {
		ans[0] = float64(y1 + x2)
		ans[1] = math.Max(float64(x1), float64(y2))
	}

	fmt.Println(ans[0], ans[1])
}
