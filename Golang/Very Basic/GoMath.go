package main

import (
	"fmt"
	"math"
)

var GLOBAL string = "global"

func main() {
	var str string
	fmt.Println("Square root of 2019: ", math.Sqrt(7))
	fmt.Println(len("Hello World"))
	fmt.Println("Hello World"[5])
	fmt.Println("Hello " + "World")
	str = "str assigned"
	fmt.Println(str)
	str =  "str re-assigned"
	fmt.Println(str)
	fmt.Println(str == "str re-assigned")
	var str2 string
	str2 = "str re-assigned"
	fmt.Println(str2 == str)

	//Shorter forms
	x:="testing"
	fmt.Println(x)

	y:=55
	fmt.Println(y)
	accessGlobal()
	var input string
	fmt.Scan(&input)
	fmt.Println("And the input is "+ input)
}

func accessGlobal() {
	fmt.Println(GLOBAL)
}