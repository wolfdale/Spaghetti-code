package main

import "fmt"

func main() {
	root := &treeNode{10, nil, nil}
	root.left = &treeNode{20, nil, nil}
	root.right = &treeNode{30, nil, nil}
	root.left.left = &treeNode{40, nil, nil}
	root.left.right = &treeNode{50, nil, nil}
	root.right.right = &treeNode{60, nil, nil}
	root.left.left.left = &treeNode{70, nil, nil}

	fmt.Println("In Order Traversal")
	inOrderTraversal(root)
	fmt.Println("\nPre Order Traversal")
	PreOrderTraversal(root)
	fmt.Println("\nPost Order Traversal")
	PostOrderTraversal(root)
}
