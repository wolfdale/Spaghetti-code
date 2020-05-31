package main

import ( 
	"fmt"
)

// Any changes to this array is reflected back 
// to calling function 
func segregateZeroOne(array [] int, size int) {
   var zeroCount int = 0 
    
    for i:=0; i < size; i++ {
		if array[i] == 0 {
            zeroCount++
        }
	}
	
    for i:=0; i < zeroCount; i++ {
        array[i] = 0
    }
	
    for i:=zeroCount; i < size; i++ {
        array[i] = 1
    }
}



func main() {
	fmt.Println("Enter Size of Array :")
	var size int
	fmt.Scanln(&size)
	
    // Golang Slice - Slices are passed by reference  
    arr := make([]int, size, 100)	
	
    for i:=0; i < size; i++ {
		fmt.Println("Enter only 0 or 1 : ")
        fmt.Scan(&arr[i])
	}
	
	
	
    segregateZeroOne(arr, size)
    fmt.Println("Segregated Array : ")
    for i:=0; i < size; i++ {
		fmt.Println(arr[i])
	}
	
	
}
