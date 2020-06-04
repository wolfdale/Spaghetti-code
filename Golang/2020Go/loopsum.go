package main

import "fmt"

func main() {

	var n, sum int

	fmt.Println("Enter the number upto which natural sum is to be calculated: ")

	fmt.Scan(&n)

	sum = 0

	for i := 1; i <= n; i++ {

		sum = sum + i
	}

	fmt.Println("Sum is : ", sum)

}
