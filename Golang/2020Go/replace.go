package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	fmt.Println("Enter a string with whitespaces : ")
	in := bufio.NewReader(os.Stdin)
	line, _ := in.ReadString('\n')

	noSpace := strings.ReplaceAll(line, "@", "%")
	fmt.Print(noSpace)
}
