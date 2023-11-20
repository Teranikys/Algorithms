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

	numbers, _ := reader.ReadString('\n')
	regime, _ := reader.ReadString('\n')
	numbers = strings.TrimSpace(numbers)
	regime = strings.TrimSpace(regime)
	splitInput := strings.Split(numbers, " ")

	troom, _ := strconv.Atoi(splitInput[0])
	tcond, _ := strconv.Atoi(splitInput[1])

	switch regime {
	case "freeze":
		if troom >= tcond {
			fmt.Println(tcond)
		} else {
			fmt.Println(troom)
		}
	case "heat":
		if troom <= tcond {
			fmt.Println(tcond)
		} else {
			fmt.Println(troom)
		}
	case "auto":
		fmt.Println(tcond)
	case "fan":
		fmt.Println(troom)
	}
}
