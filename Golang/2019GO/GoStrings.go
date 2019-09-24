package main


import(
	"fmt"
)


func main() {
	fmt.Println("More on String in GoLang")
	str1 := "This"
	str2 := "is"
	str3 := "test"

	//It return a len and error object
	stringLength, err := fmt.Println(str1, str2, str3)

	if err == nil {
		  fmt.Println(stringLength)
	}

	fmt.Printf("Data Types %T\n", stringLength)
	fmt.Printf("Data Types %T\n", str1)
	fmt.Printf("Data Types %T\n", str2)


}