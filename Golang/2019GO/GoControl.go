package main

import(
	"fmt"
)

func main(){
	OddEven()
	ClassicFizzBuzz()
}

func OddEven(){
	for i := 1; i<50; i++ {
		if i%2 == 0 {
			fmt.Println("Even ", i)
		} else {
			fmt.Println("odd ", i)
		}
	}
}

func ClassicFizzBuzz(){
	for i := 1; i<100 ; i++ {
		if i%3 == 0 && i%5 == 0 {
			fmt.Println("Fizz Buzz")
		} else if i%3 == 0 {
			fmt.Println("Fizz")
		} else if i%5==0 {
			fmt.Println("Buzz")
		} else{
			fmt.Println(i)
		}
	}
}
