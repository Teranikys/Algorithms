package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader = bufio.NewReader(os.Stdin)
var writer = bufio.NewWriter(os.Stdout)

//goland:noinspection GoUnhandledErrorResult
func Scan(args ...any) {
	fmt.Fscan(reader, args...)
}

//goland:noinspection GoUnhandledErrorResult
func Println(args ...any) {
	fmt.Fprintln(writer, args...)
}

//goland:noinspection GoUnhandledErrorResult
func Print(args ...any) {
	fmt.Fprint(writer, args...)
}

//goland:noinspection GoUnhandledErrorResult
func main() {
	defer writer.Flush()
	var t, n, q, l, r, k int
	Scan(&t)
	for i := 0; i < t; i++ {
		Scan(&n, &q)
		var a, prefix, sufix = make([]int, n), make([]int, n+1), make([]int, n+1)
		for j := 0; j < n; j++ {
			Scan(&a[j])
		}
		for j := 1; j < n+1; j++ {
			prefix[j] = prefix[j-1] + a[j-1]
			sufix[j] = sufix[j-1] + a[n-j]
		}
		for j := 0; j < q; j++ {
			Scan(&l, &r, &k)
			var sum = k*(r-l+1) + prefix[l-1] + sufix[n-r]
			if sum%2 != 0 {
				Println("YES")
			} else {
				Println("NO")
			}
		}
	}
}
