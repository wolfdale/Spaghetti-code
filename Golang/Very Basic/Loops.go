package main
import "fmt"

func printSquare(n int){
	var i,j int;
	for i=0 ; i<n ; i++{
		for j=0; j<n; j++{
			fmt.Print("*")
		}
		fmt.Println()
	}
}
func main(){
     var num int
     fmt.Scanf("%d",&num)
     fmt.Println(num)
     printSquare(num)
}
