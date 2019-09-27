package main

import(
	"fmt"
)


func print1(){
	fmt.Println("This will print in second place")
}


func print2()  {
	fmt.Println("This will print in first place")
}

func main()  {
	//Defer act as a finally in Java used for clean ups. They alwasy executes even is runtime panic occurs
	defer print1()
	print2()
}