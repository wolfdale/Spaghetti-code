package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "This is string"
	str2 := "THIS IS STRING"
	fmt.Println(strings.ToTitle(str1))
	fmt.Println(strings.ToUpper(str2))

	fmt.Println(str1, "\n", str2)

	fmt.Println(strings.EqualFold(str1, str2))
	fmt.Println(str1 == str2)

	fmt.Println(strings.Contains(str1, "this"))

}
