package main

import (
	"fmt"
)

func checkYear(year int) bool {
	if year%400 == 0 {
		return true
	}

	if year%100 == 0 {
		return false
	}

	if year%4 == 0 {
		return true
	}

	return false

}

func main() {
	fmt.Println("Enter Year : ")
	var year int
	fmt.Scanln(&year)

	fmt.Println(checkYear(year))
}
