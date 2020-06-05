package main

import "fmt"

func main() {
	var n int
	var multi int

	fmt.Println("Enter any Integer Number : ")
	fmt.Scan(&n)

	fmt.Println("Enter multiplication factor : ")
	fmt.Scan(&multi)

	i := 1

	// Go's While loop variation with FOR loop
	for {
		if i > multi {
			break
		}
		fmt.Println(n, " X ", i, " = ", n*i)
		i++
	}
}
