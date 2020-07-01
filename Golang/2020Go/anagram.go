package main

import (
	"fmt"
)

func main() {
	var str1 string
	var str2 string
	fmt.Println("Enter First String")
	fmt.Scanf("%s", &str1)
	fmt.Println("Enter Second String")
	fmt.Scanf("%s", &str2)

	if len(str1) != len(str2) {
		fmt.Println("These strings are not anagram")
	}

	// Using Hashing Technique
	// Creating a HashMap of String and Integer
	// Note : string(r) --> method is used to convert type rune to type string
	hash := make(map[string]int)

	for _, r := range str1 {
		j := hash[string(r)]

		if j == 0 {
			hash[string(r)] = 1
		} else {
			hash[string(r)] = j + 1
		}
	}

	for _, r := range str2 {
		j := hash[string(r)]

		if j == 0 {
			hash[string(r)] = 1
		} else {
			hash[string(r)] = j + 1
		}
	}

	// It is obvious that if the strings are anagram
	// They will have even number of characters in hash (stored as value)
	// Example : "act" and "tac"
	//
	// While Creating a hashmap from "act" string we have
	// Key Value
	// a    1
	// c    1
	// t    1
	// While Creating a hashmap from "tac" string we have
	// Key Value
	// a    2 (1+1)
	// c    2 (1+1)
	// t    2 (1+1)

	// Note that the final count of every character is even.

	// Iterating over hashmap
	var isAnagram bool = true
	for _, value := range hash {
		if value%2 != 0 {
			isAnagram = false
			break
		}

	}

	if isAnagram {
		fmt.Println("These strings are anagrams")
	} else {
		fmt.Println("These strings not are anagrams")
	}
}
