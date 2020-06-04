package main

import "fmt"

func sumOfNumbers(n int) int {

	if n == 0 {

		return 0

	}

	return (n + sumOfNumbers(n-1))
}

func main() {

	var n int
	fmt.Println("Enter the number upto which natural sum is to be calculated: ")
	fmt.Scan(&n)
	result := sumOfNumbers(n)
	fmt.Println("Sum is : ", result)

}
