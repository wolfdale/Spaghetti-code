package main

import (
	"fmt"
)

func main() {
	fmt.Println("Enter Number 1 or 2")
	var input int
	fmt.Scanln(&input)

	switch input {
	case 1:
		fmt.Println("Number 1")
	case 2:
		fmt.Println("Number 2")
	default:
		panic(fmt.Sprintf("Number Scanned %d\n", input))
	}

}
