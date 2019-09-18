package main

import(
	"fmt"
)

func main()  {

	fmt.Println("Array slices !!")
	arr := [10]float64{1,2,3,4,5,6,7}

	// array slice just like python
	// Slices are variable length
	x := arr[1:5]
	fmt.Println(x)

	y := append(x, 15,16)
	fmt.Println(y)

	//Building a slice and copying data from another slice
	dum := make([]float64, 5)
	fmt.Println(dum)
	t := copy(dum, x)
	fmt.Println(t)

}