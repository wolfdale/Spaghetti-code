package main

import (
	"fmt"
)

func binarySearch(array []int, low int, high int, num int) int {
	if low <= high {
		var mid int
		mid = (high + low) / 2

		if array[mid] == num {
			return mid
		}

		if array[mid] > num {
			return binarySearch(array, low, mid-1, num)
		} else {
			return binarySearch(array, mid+1, high, num)
		}
	}

	return -1
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

	fmt.Println("Enter the number to be searched :")
	fmt.Scan(&num)
	var result int

	result = binarySearch(array, 0, size-1, num)

	if result == -1 {
		fmt.Println("Element not found !")
	} else {
		fmt.Println("Element found at position : ", result+1)
	}
}
