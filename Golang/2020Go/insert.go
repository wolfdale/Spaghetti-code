package main

import (
	"fmt"
)

func insertionSort(arr []int, size int) {
	for i := 1; i < size; i++ {
		var key = arr[i]
		var j int = i - 1

		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j--
		}
		arr[j+1] = key

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

	insertionSort(arr, size)

	fmt.Println("Array after sorting")
	for i := 0; i < size; i++ {
		fmt.Println(arr[i])
	}
}
