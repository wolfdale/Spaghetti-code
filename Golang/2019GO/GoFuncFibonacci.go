package main

//Demo recursion

import(
	"fmt"
)

func main(){
	fmt.Println("Lets try recursion !")
	var input int64
	fmt.Scanf("%d", &input)
	fmt.Println("Fibonacci for  ", fib(input))

}

func fib(num int64) int64{
	if num <= 1{
		return num;
	}
	return fib(num-1) + fib(num-2);
}