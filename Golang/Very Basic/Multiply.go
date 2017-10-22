package main
import "fmt"

func adder(a int,b int) int{
	return a+b
}
func mult(a int, b int) int{
	return a*b
}
func main(){
	// your code goes here
	fmt.Println("Adding and Mult 3 and 5")
	fmt.Println(adder(3,5))
	fmt.Println(mult(3,5))
}
