package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader = bufio.NewReader(os.Stdin)
var writter = bufio.NewWriter(os.Stdout)

//goland:noinspection GoUnhandledErrorResult
func Scan(args ...any) {
	fmt.Fscan(reader, args...)
}

//goland:noinspection GoUnhandledErrorResult
func Println(args ...any) {
	fmt.Fprintln(writter, args...)
}

//goland:noinspection GoUnhandledErrorResult
func Print(args ...any) {
	fmt.Fprint(writter, args...)
}

func solution() {
	var s string
	Scan(&s)
	var a = make([]byte, len(s))
	var add byte = 0
	var maxInd = len(a)
	for j := len(s) - 1; j >= 0; j-- {
		a[j] = s[j] + add
		if a[j] >= '5' {
			maxInd = j
			a[j] = '0'
			add = 1
		} else {
			add = 0
		}
	}
	for j := maxInd; j < len(a); j++ {
		a[j] = '0'
	}
	if add != 0 {
		Print(add)
	}
	Println(string(a))
}

//goland:noinspection GoUnhandledErrorResult
func main() {
	defer writter.Flush()
	var t int
	Scan(&t)
	for i := 0; i < t; i++ {
		solution()
	}
}
