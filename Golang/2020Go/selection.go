package main

import (
	"fmt"
)

func selection_sort(arr []int, size int) {
	for i := 0; i < size; i++ {
		min := i
		for j := i + 1; j < size; j++ {
			if arr[min] > arr[j] {
				min = j
			}

			temp := arr[min]
			arr[min] = arr[i]
			arr[i] = temp
		}

	}
}

func main() {
	var size int
	fmt.Println("Enter the size of array :")
	fmt.Scan(&size)
	fmt.Println("Enter elements")
	var arr = make([]int, size)

	for i := 0; i < size; i++ {
		fmt.Scan(&arr[i])

	}

	selection_sort(arr, size)

	fmt.Println("Array after sorting")
	for i := 0; i < size; i++ {
		fmt.Println(arr[i])
	}
}
