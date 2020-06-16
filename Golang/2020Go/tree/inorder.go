package main

import "fmt"

type Node struct {
	val   int
	left  *Node
	right *Node
}

func inorderRecursive(root *Node) {
	if root == nil {
		return
	}

	inorderRecursive(root.left)
	fmt.Printf("%d \n", root.val)
	inorderRecursive(root.right)
}

func main() {
	root := &Node{1, nil, nil}
	root.left = &Node{2, nil, nil}
	root.right = &Node{3, nil, nil}
	root.left.left = &Node{4, nil, nil}
	root.left.right = &Node{5, nil, nil}
	root.right.right = &Node{6, nil, nil}
	root.left.left.left = &Node{7, nil, nil}

	fmt.Println("Inorder Traversal: ")
	inorderRecursive(root)
}
