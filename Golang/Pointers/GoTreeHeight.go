package main

import ("fmt"
		"GoTreeDs")


func main() {
	root := &treeNode{65, nil, nil}
	root.left = &treeNode{85, nil, nil}
	root.right = &treeNode{95, nil, nil}
	//root.right.right = &treeNode{95, nil, nil}
	//root.right.right.right = &treeNode{95, nil, nil}treeNode

	fmt.Print(HeightOfTree(root))

}
