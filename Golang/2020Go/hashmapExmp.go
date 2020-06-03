package main

import (
	"fmt"
)

func main() {

	// Creating a HashMap of String and Integer
	var animal = make(map[string]int)

	// Inserting values in hashmap
	animal["Dog"] = 10
	animal["Cat"] = 13
	animal["Fish"] = 20

	// Iterating Hashmap
	for key, value := range animal {
		fmt.Println("We have", value, key)
	}

	// Getting Value corresponding to Key
	fmt.Println("Total Dogs ", animal["Dog"])

	var sum int = 0
	// Performing operation on hashmap
	for _, value := range animal {
		sum += value
	}
	fmt.Println("Total pets ", sum)

}
