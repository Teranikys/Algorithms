package main

import "fmt"

//goland:noinspection GoUnhandledErrorResult
func main() {
	var t, n, x int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&n)
		var ch, nch int
		for j := 0; j < n; j++ {
			fmt.Scan(&x)
			if x%2 == 0 {
				ch += x
			} else {
				nch += x
			}
		}
		if ch > nch {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
