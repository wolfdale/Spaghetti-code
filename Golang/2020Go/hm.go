package main

import (
	"fmt"
)

func main() {

	// Creating a HashMap of String and Integer
	var colorCode = make(map[string]int)

	// Inserting values in hashmap
	colorCode["Red"] = 2
	colorCode["Blue"] = 4
	colorCode["Green"] = 8
	colorCode["Orange"] = 16
	colorCode["Violet"] = 32
	colorCode["Pink"] = 64
	colorCode["Yellow"] = 128

	// Iterating Hashmap
	for key, value := range colorCode {
		fmt.Println("We have", value, key)
	}

	// Deleting values
	delete(colorCode, "Violet")
	fmt.Println("------After Deletion------")

	for key, value := range colorCode {
		fmt.Println("We now have", value, key)
	}

}
