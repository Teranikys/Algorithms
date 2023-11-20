package main

import (
	"fmt"
)

func main() {
	/*var n, a, ans, maxonInd, counter int
	maxon := math.MinInt
	_, _ = fmt.Scan(&n)
	arr := make([]int, n)

	for i := 0; i < n; i++ {
		_, _ = fmt.Scan(&a)
		arr[i] = a
	}

	for ind, num := range arr {
		if num > maxon {
			maxon = num
			maxonInd = ind
		}
	}

	for i := maxonInd + 1; i < n-1; i++ {
		num := arr[i]
		if num%10 == 5 && arr[i+1] < num {
			ans = num
		}
	}

	if ans == 0 {
		fmt.Println(0)
		return
	}

	for _, num := range arr {
		if num > ans {
			counter++
		}
	}

	fmt.Println(counter + 1)*/

	var n, a, ans int
	_, _ = fmt.Scan(&n)
	arr := make([]int, n)

	for i := 0; i < n; i++ {
		_, _ = fmt.Scan(&a)
		arr[i] = a
	}
	best := arr[0]

	for i := 1; i < n-1; i++ {
		curr := arr[i]
		if curr > best {
			best = curr
			ans = 0
		} else if curr%10 == 5 && arr[i+1] < curr {
			if ans == 0 || ans < curr {
				ans = curr
			}
		}
	}

	if ans == 0 {
		fmt.Println(0)
		return
	}

	counter := 1
	for _, num := range arr {
		if num > ans {
			counter++
		}
	}

	fmt.Println(counter)
}
