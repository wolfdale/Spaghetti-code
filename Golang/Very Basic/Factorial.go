package main
import "fmt"
func fib(x int) int{
	if x<=0 {
		return 1; 
	}
	return x*fib(x-1)
}
func main(){
	fmt.Println(fib(2))
}
