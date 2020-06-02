package main

import (
	"fmt"
)

func bubbleSort(array []int, size int) {
	for i := 0; i < size; i++ {
		for j := 0; j < size; j++ {
			if array[i] < array[j] {
				var temp int
				temp = array[i]
				array[i] = array[j]
				array[j] = temp
			}
		}
	}
}

func main() {
	fmt.Println("Enter the size of array")
	var size int
	fmt.Scan(&size)

	array := make([]int, size, 100)

	for i := 0; i < size; i++ {
		fmt.Println("Enter element : ")
		fmt.Scan(&array[i])
	}

	bubbleSort(array, size)

	fmt.Println("Sorted Array : ")

	for i := 0; i < size; i++ {
		fmt.Println(array[i])
	}

}
