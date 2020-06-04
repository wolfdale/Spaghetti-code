package main

import "fmt"

func main() {
	var size int

	fmt.Println("Enter the size of array: ")
	fmt.Scan(&size)
	fmt.Println("Enter the array elements: ")

	// Create the array using make
	array := make([]int, size)
	sum := 0

	for i := 0; i < size; i++ {
		fmt.Scan(&array[i])
		sum = sum + array[i]
	}

	avg := float64(sum) / float64(size)

	fmt.Printf("\nAverage is : %f \n", avg)
}
