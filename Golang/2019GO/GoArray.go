package main

import(
	"fmt"
	"math/rand"
)

func main()  {

	fmt.Println("This will demo GO Arrays")
	var x [4] int

	//will cause runtime error if array index out of bounds
	for i:=0; i<4; i++ {
		fmt.Println("Default Value at position:  ",  x[i])
	}

	for i:=0; i<4; i++ {
		x[i] = rand.Intn(100)
	}

	var sum = 0

	for i:=0; i<4; i++ {
		sum = sum + x[i]
		fmt.Println("Current Sum is : ", sum)
	}

}