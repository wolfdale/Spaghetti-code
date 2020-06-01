package main

import (
	"fmt"
)

func linearSearch(array []int, size int, num int) {
	var isFound bool
	for i := 0; i < size; i++ {
		if array[i] == num {
			fmt.Println("Number found at position : ", i+1)
			isFound = true
			continue
		}
	}
	if !isFound {
		fmt.Println("Number not found")
	}
	return

}

func main() {
	fmt.Println("Enter the size of array")
	var size int
	fmt.Scan(&size)

	var num int
	array := make([]int, size, 100)

	for i := 0; i < size; i++ {
		fmt.Println("Enter element : ")
		fmt.Scan(&array[i])
	}

	fmt.Println("Enter the number to be searched")
	fmt.Scan(&num)

	linearSearch(array, size, num)

}
