package main

import(
	"fmt"
)

func main(){
	fmt.Println("Go Pointers")
	//Swapping 2 numbers
	x:=2
	y:=5
	fmt.Printf("Values before x : %d and y: %d\n", x, y)
	swap(&x, &y)
	fmt.Printf("Values After x : %d and y: %d", x, y)
}

func swap(xPtr *int, yPtr *int) {
	temp := *yPtr
	*yPtr = *xPtr
	*xPtr = temp
}