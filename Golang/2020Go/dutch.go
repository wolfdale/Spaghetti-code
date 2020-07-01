package main

import ( 
    "fmt"
)


func sortDNFA(arr [] int, size int) {
    low := 0
    mid := 0
    high := size
    temp := 0

        fmt.Println("Evaluating", arr[mid])
        fmt.Println("Evaluating", mid)
    for mid <= high  {
        fmt.Println("Evaluating", arr[mid])
        switch arr[mid] {
            case 0:
                temp = arr[low]
                arr[low] = arr[mid]
                arr[mid] = temp
                mid = mid+1
                low = low + 1
                break;
            
            case 1:
                mid = mid+1
                break;

            case 2:
                temp = arr[mid]
                arr[mid] = arr[high]
                arr[high] = temp
                high = high -1
                break;
        }
    }
}

func main() {
	var size int

	fmt.Println("Enter the size of array :")
	fmt.Scan(&size)

	fmt.Println("Enter elements (Only 0, 1 & 2 allowed)")
	var arr = make([]int, size)

	for i := 0; i < size; i++ {
		fmt.Scan(&arr[i])
        fmt.Println("Enterd", arr[i])
        
	}

    sortDNFA(arr, size)
    
	fmt.Println("Array after all 0s 1s & 2s")

	for i := 0; i < size; i++ {
		fmt.Println(arr[i])
	}
}

