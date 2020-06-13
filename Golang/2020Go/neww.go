package main

import "fmt"

type employee struct {
    name   string
    age    int
    salary int
}

func main() {
    empP := new(employee)
    fmt.Printf("Pointer Address: %p\n", empP)
    fmt.Printf("Emp Pointer: %+v\n", empP)
    fmt.Printf("Emp Value: %+v\n", *empP)
}
