package main

import(
	"fmt"
)

func main(){
	fmt.Println("This is demo for GO Functions")
	xt := []float64{1,2,3,4,5,6,7,8}
	var total = sum(xt)
	fmt.Println(total)

}

func sum(x[] float64) float64{
	total := 0.0
	for _, v := range x {
		total += v
	}
	return total
}