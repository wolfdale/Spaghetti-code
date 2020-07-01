package main

import (
	"fmt"
)

func digitSum(num int) int {
	sum := 0

	for i := num; i > 0; i = i / 10 {

		sum = sum + (i % 10)

	}

	return sum
}

func main() {
	var num int
	fmt.Println("Enter digit : ")
	fmt.Scan(&num)
	sum := digitSum(num)
	fmt.Println("Sum of digits : ", sum)

}
