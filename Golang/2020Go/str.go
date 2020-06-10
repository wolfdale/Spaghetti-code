package main

import (
	"fmt"
	"strconv"
)

func main() {
	var x string
	fmt.Println("Enter a String")
	fmt.Scanf("%s", &x)
	val, err := strconv.Atoi(x)

	if err != nil {
		fmt.Printf("%s is not a number\n", x)
	} else {
		fmt.Printf("%s is a number %d\n", x, val)
	}

	var y string
	fmt.Println("Enter a Number")
	fmt.Scanf("%s", &y)
	val, err = strconv.Atoi(y)

	if err != nil {
		fmt.Printf("%s is not a number\n", y)
	} else {
		fmt.Printf("%s is a number\n", y, val)
	}
}
