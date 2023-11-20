package main

import "fmt"

//goland:noinspection GoUnhandledErrorResult
func main() {
	var t, n int
	var str string
	fmt.Scan(&t)
	for i := 0; i < t; i++ {
		var flag bool
		var lol = make(map[byte]bool)
		fmt.Scan(&n)
		fmt.Scan(&str)
		for j := 0; j < n; j++ {
			var val bool
			if j%2 == 0 {
				val = true
			} else {
				val = false
			}
			if _, ok := lol[str[j]]; ok && val != lol[str[j]] {
				fmt.Println("NO")
				flag = true
				break
			}
			lol[str[j]] = val
		}
		if !flag {
			fmt.Println("YES")
		}
	}
}
