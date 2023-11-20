package main

import (
	"bufio"
	"fmt"
	"os"
)

// console input//output
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

func solve() {
	var n, m, k, h, ans int
	Scan(&n, &m, &k, &h)
	var a = make([]int, n)
	for i := 0; i < n; i++ {
		Scan(&a[i])
		var diff = abs(a[i] - h)
		if (diff%k == 0) && (diff/k < m) && (diff > 0) {
			ans++
		}
	}
	Println(ans)
}

//goland:noinspection GoUnhandledErrorResult
func main() {
	defer writer.Flush()
	var t int
	Scan(&t)
	//t = 1
	for i := 0; i < t; i++ {
		solve()
	}
}

// Heap 1d implementation
type Heap []int

func (h *Heap) Len() int           { return len(*h) }
func (h *Heap) Less(i, j int) bool { return (*h)[i] < (*h)[j] }
func (h *Heap) Swap(i, j int)      { (*h)[i], (*h)[j] = (*h)[j], (*h)[i] }
func (h *Heap) Push(x any)         { *h = append(*h, x.(int)) }
func (h *Heap) Pop() any {
	var old = *h
	var n = len(old)
	var x = old[n-1]
	*h = old[0 : n-1]
	return x
}

type Heap2 [][2]int

func (h *Heap2) Len() int           { return len(*h) }
func (h *Heap2) Less(i, j int) bool { return (*h)[i][0] < (*h)[j][0] }
func (h *Heap2) Swap(i, j int)      { (*h)[i], (*h)[j] = (*h)[j], (*h)[i] }
func (h *Heap2) Push(x any)         { *h = append(*h, x.([2]int)) }
func (h *Heap2) Pop() any {
	var old = *h
	var n = len(old)
	var x = old[n-1]
	*h = old[0 : n-1]
	return x
}

// Handful functions
//

type Number interface {
	int | int32 | uint | uint8 | int64 | float32 | float64
}

//goland:noinspection GoUnusedFunction
func abs[T Number](a T) T {
	if a < 0 {
		return -a
	}
	return a
}

//goland:noinspection GoUnusedFunction
func isPrime(n int) bool {
	if n < 2 {
		return false
	}
	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}

//goland:noinspection GoUnusedFunction
func max[T Number](a ...T) T {
	m := a[0]
	for _, v := range a {
		if v > m {
			m = v
		}
	}
	return m
}

//goland:noinspection GoUnusedFunction
func min[T Number](a ...T) T {
	m := a[0]
	for _, v := range a {
		if v < m {
			m = v
		}
	}
	return m
}

//goland:noinspection GoUnusedFunction
func dedupeInts[T Number](a []T) []T {
	var m, uniq = make(map[T]struct{}), make([]T, 0, len(a))
	for i := 0; i < len(a); i++ {
		if _, ok := m[a[i]]; !ok {
			m[a[i]], uniq = struct{}{}, append(uniq, a[i])
		}
	}
	return uniq
}

//goland:noinspection GoUnusedFunction
func sqrt[T Number](a T) T {
	return a * a
}

//goland:noinspection GoUnusedFunction
func lcm(a, b int) int {
	return a * b / gcd(a, b)
}

//goland:noinspection GoUnusedFunction
func gcd(a, b int) int {
	for b != 0 {
		a, b = b, a%b
	}
	return a
}
