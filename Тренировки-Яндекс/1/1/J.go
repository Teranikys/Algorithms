package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)

	input, _ := reader.ReadString('\n')
	input = strings.TrimSpace(input)
	a, _ := strconv.ParseFloat(input, 64)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	b, _ := strconv.ParseFloat(input, 64)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	c, _ := strconv.ParseFloat(input, 64)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	d, _ := strconv.ParseFloat(input, 64)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	e, _ := strconv.ParseFloat(input, 64)

	input, _ = reader.ReadString('\n')
	input = strings.TrimSpace(input)
	f, _ := strconv.ParseFloat(input, 64)

	det := a*d - b*c
	det1 := d*e - b*f
	det2 := a*f - c*e

	if a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 {
		fmt.Println(5)
	} else if a*d == b*c && a*f != c*e {
		fmt.Println(0)
	} else if a == 0 && b == 0 && e != 0 {
		fmt.Println(0)
	} else if c == 0 && d == 0 && f != 0 {
		fmt.Println(0)
	} else if a == 0 && c == 0 && b*f != d*e {
		fmt.Println(0)
	} else if b == 0 && d == 0 && a*f != c*e {
		fmt.Println(0)
	} else if a*d == b*c && a*f == c*e {
		if b == 0 && d == 0 {
			if a != 0 && c != 0 {
				fmt.Println(3, e/a)
			} else if a == 0 {
				if e == 0 {
					fmt.Println(3, f/c)
				}
			} else if c == 0 {
				if f == 0 {
					fmt.Println(3, e/a)
				}
			}
		} else if a == 0 && c == 0 {
			if b != 0 {
				fmt.Println(4, e/b)
			} else if d != 0 {
				fmt.Println(4, f/d)
			}
		} else if b != 0 {
			fmt.Println(1, -a/b, e/b)
		} else if d != 0 {
			fmt.Println(1, -c/d, f/d)
		}
	} else {
		fmt.Println(2, det1/det, det2/det)
	}
}
