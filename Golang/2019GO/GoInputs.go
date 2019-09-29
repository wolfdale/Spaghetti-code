package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	fmt.Println("Hello ! Enter Text ")
	reader := bufio.NewReader(os.Stdin)
	str, _ := reader.ReadString('\n')
	fmt.Println(str)

	fmt.Println("Enter Number")
	str, _ = reader.ReadString('\n')
	flo, err := strconv.ParseFloat(strings.TrimSpace(str), 64)
	if err == nil {
		fmt.Println(flo)
	}

}
