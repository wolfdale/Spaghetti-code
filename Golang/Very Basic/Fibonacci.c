package main
import "fmt"


func fib(x int32) int{
	
	if(x==0){
	    return 0;
	}
	if(x == 1){
	    return 1;
	}
	return fib(x-1) + fib(x-2)

}
func main(){
	fmt.Printf("Fibonacci Number at Position %d\n",6)
	
	fmt.Print(fib(6))
	
}
