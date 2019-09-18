package main

import(
	"fmt"
)

func main(){
	fmt.Println("Go Maps")
	elements := make(map[string]string)
	elements["H"] = "Hydrogen"
	elements["He"] = "Helium"
	elements["Li"] = "Lithium"
	elements["Be"] = "Beryllium"
	elements["B"] = "Boron"
	elements["C"] = "Carbon"
	elements["N"] = "Nitrogen"
	elements["O"] = "Oxygen"
	elements["F"] = "Fluorine"
	elements["Ne"] = "Neon"

	fmt.Println(elements["Li"])
	name, ok := elements["Li"]
	fmt.Println(name, ok)
	name1, ok := elements["abc"]
	fmt.Println(name1, ok)
}