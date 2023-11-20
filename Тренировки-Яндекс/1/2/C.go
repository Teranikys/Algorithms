package main

import (
	"fmt"
	"math"
)

func main() {
	var n, x, a, ans int
	minDiff := math.MaxInt
	_, _ = fmt.Scan(&n)
	arr := make([]int, n)

	for i := 0; i < n; i++ {
		_, _ = fmt.Scan(&a)
		arr[i] = a
	}

	_, _ = fmt.Scan(&x)

	for _, elem := range arr {
		if int(math.Abs(float64(elem-x))) < minDiff {
			ans = elem
			minDiff = int(math.Abs(float64(elem - x)))
		}
	}

	fmt.Println(ans)
}
