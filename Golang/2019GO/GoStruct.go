package main

import (
	"fmt"
)

type TwoDCoordinate struct {
	Xaxis float64
	Yaxis float64
}

func main() {

	coordinate := TwoDCoordinate{64.92, 34.76}
	fmt.Println(coordinate)
	fmt.Printf("%+v\n", coordinate)
	fmt.Printf("Xaxis: %v\nYaxis: %v", coordinate.Xaxis, coordinate.Yaxis)

}
