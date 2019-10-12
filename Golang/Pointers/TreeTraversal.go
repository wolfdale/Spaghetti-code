package main

import "fmt"

type Node struct {
	val   int64
	left  *Node
	right *Node
}

func InOrderTraversal(root *Node) {
	if root == nil {
		return
	}

	InOrderTraversal(root.left)
	fmt.Printf("%d ", root.val)
	InOrderTraversal(root.right)
}

func PreOrderTraversal(root *Node) {
	if root == nil {
		return
	}
	fmt.Printf("%d ", root.val)
	PreOrderTraversal(root.left)
	PreOrderTraversal(root.right)
}

func PostOrderTraversal(root *Node) {
	if root == nil {
		return
	}

	PostOrderTraversal(root.left)
	PostOrderTraversal(root.right)
	fmt.Printf("%d ", root.val)
}

func main() {
	root := &Node{10, nil, nil}
	root.left = &Node{20, nil, nil}
	root.right = &Node{30, nil, nil}
	root.left.left = &Node{40, nil, nil}
	root.left.right = &Node{50, nil, nil}
	root.right.right = &Node{60, nil, nil}
	root.left.left.left = &Node{70, nil, nil}

	fmt.Println("In Order Traversal")
	InOrderTraversal(root)
	fmt.Println("\nPre Order Traversal")
	PreOrderTraversal(root)
	fmt.Println("\nPost Order Traversal")
	PostOrderTraversal(root)
}
