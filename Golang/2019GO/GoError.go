package main

import (
	"fmt"
	"os"
	"errors"
)

func main() {
	f, err := os.Open("filename.ext")

	if err == nil {
		fmt.Println(f)
	} else {
		fmt.Println(err.Error())
	}

	myError := errors.New("My error string")
	fmt.Println(myError)

	attendance := map[string]bool{
		"Ann": true,
		"Mike": true}
	attended, ok := attendance["M"]
	if ok {
		fmt.Println("Mike attended?", attended)
	} else {
		fmt.Println("No info for Mike")
	}

}
