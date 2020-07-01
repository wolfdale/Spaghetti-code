package main

import "fmt"

type employee struct {
    name   string
    age    int
    salary int
}

func main() {
    emp := employee{name: "Elon", age: 31, salary: 2000}
    empP := &emp
    fmt.Printf("Emp: %+v\n", empP)
    empP = &employee{name: "Musk", age: 30, salary: 3000}
    fmt.Printf("Emp: %+v\n", empP)
    fmt.Println("Emp Name ", empP.name)
}
