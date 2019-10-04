package main

import "fmt"

type Node struct {
	val   int64
	left  *Node
	right *Node
}

func InorderTraversal(root *Node) {
	if root == nil {
		return
	}

	InorderTraversal(root.left)
	fmt.Printf("%d ", root.val)
	InorderTraversal(root.right)
}

func main() {
	root := &Node{10, nil, nil}
	root.left = &Node{20, nil, nil}
	root.right = &Node{30, nil, nil}
	root.left.left = &Node{40, nil, nil}
	root.left.right = &Node{50, nil, nil}
	root.right.right = &Node{60, nil, nil}
	root.left.left.left = &Node{70, nil, nil}

	fmt.Println("Inorder Traversal")
	InorderTraversal(root)
}
