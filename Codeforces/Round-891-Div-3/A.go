package main

import "fmt"

//goland:noinspection GoUnhandledErrorResult
func main() {
	var t, n, x int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		var nch int
		fmt.Scan(&n)
		for j := 0; j < n; j++ {
			fmt.Scan(&x)
			if x%2 != 0 {
				nch++
			}
		}
		if nch%2 == 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
