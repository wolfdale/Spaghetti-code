package main

import (
	"fmt"
)

func swap(a *int, b *int) {
	var tmp = *a
	*a = *b
	*b = tmp
}

func main() {
	var a int
	var b int
	fmt.Println("Enter First number : ")
	fmt.Scan(&a)
	fmt.Println("Enter Second number : ")
	fmt.Scan(&b)

	fmt.Printf("Before swap: First = %d, Second = %d \n", a, b)

	// Function Call
	swap(&a, &b)

	fmt.Printf("After swap: First = %d, Second = %d \n", a, b)

}
