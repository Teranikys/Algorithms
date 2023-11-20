package main

import "fmt"

//goland:noinspection GoUnhandledErrorResult
func main() {
	var t, a, b, c int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&a, &b, &c)
		if a+b == c {
			fmt.Println("+")
		} else {
			fmt.Println("-")
		}
	}
}
