package main

import (
	"fmt"
)

func main() {
	var a, b, c int

	fmt.Println("Enter the 1st number: ")
	fmt.Scan(&a)

	fmt.Println("Enter the 2nd number: ")
	fmt.Scan(&b)

	fmt.Println("Enter the 3rd number: ")
	fmt.Scan(&c)

	if a > b && a > c {
		fmt.Printf("\nLargest number is: %d", a)
	} else if b > a && b > c {
		fmt.Printf("\nLargest number is: %d", b)
	} else {
		fmt.Printf("Largest number is: %d \n", c)
	}
}
