package main

import (
	"fmt"
)


func main(){
	//Defer executes in LIFO Order. thou its a resource leak
	for i :=0; i<5; i++ {
		defer fmt.Println(i)
	}
}