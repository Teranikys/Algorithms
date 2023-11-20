package main

import (
	"fmt"
	"math"
)

func main() {
	/*var current, last int
	var ans string

	_, _ = fmt.Scan(&last)

	if last == -2*int(math.Pow10(9)) {
		ans = "RANDOM"
		fmt.Println(ans)
		return
	}

	for {
		_, _ = fmt.Scan(&current)
		if current == -2*int(math.Pow10(9)) {
			break
		}
		if last < current && (ans == "ASCENDING" || ans == "") {
			ans = "ASCENDING"
		} else if last == current && ans == "ASCENDING" {
			ans = "WEAKLY ASCENDING"
		} else if last > current && (ans == "DESCENDING" || ans == "") {
			ans = "DESCENDING"
		} else if last == current && ans == "DESCENDING" {
			ans = "WEAKLY DESCENDING"
		} else if last < current && (ans == "DESCENDING" || ans == "WEAKLY DESCENDING") {
			ans = "RANDOM"
		} else if last > current && (ans == "ASCENDING" || ans == "WEAKLY ASCENDING") {
			ans = "RANDOM"
		} else if last == current && (ans == "" || ans == "CONSTANT") {
			ans = "CONSTANT"
		}
		last = current
	}

	if ans == "" {
		ans = "CONSTANT"
	}

	fmt.Println(ans)*/

	var last, current int
	var cons, asc, desc bool

	_, _ = fmt.Scan(&last)

	if last == -2*int(math.Pow10(9)) {
		fmt.Println("RANDOM")
		return
	}

	for {
		_, _ = fmt.Scan(&current)
		if current == -2*int(math.Pow10(9)) {
			break
		}
		if last == current {
			cons = true
		} else if last < current {
			asc = true
		} else if last > current {
			desc = true
		}
		last = current
	}

	if cons && !asc && !desc {
		fmt.Println("CONSTANT")
	} else if !cons && asc && !desc {
		fmt.Println("ASCENDING")
	} else if cons && asc && !desc {
		fmt.Println("WEAKLY ASCENDING")
	} else if !cons && !asc && desc {
		fmt.Println("DESCENDING")
	} else if cons && !asc && desc {
		fmt.Println("WEAKLY DESCENDING")
	} else {
		fmt.Println("RANDOM")
	}
}
