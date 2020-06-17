package main

import "fmt"

type Node struct {
	val   int
	left  *Node
	right *Node
}

func preOrderRecursive(root *Node) {
	if root == nil {
		return
	}

	fmt.Printf("%d \n", root.val)
	preOrderRecursive(root.left)
	preOrderRecursive(root.right)
}

func main() {
	// Tree Representation
	//         1
	//       /   \
	//      2     3
	//    / \    / \
	//   4   5  6   7

	root := &Node{1, nil, nil}
	root.left = &Node{2, nil, nil}
	root.right = &Node{3, nil, nil}
	root.left.left = &Node{4, nil, nil}
	root.left.right = &Node{5, nil, nil}
	root.right.right = &Node{6, nil, nil}
	root.left.left.left = &Node{7, nil, nil}

	fmt.Println("Preorder Traversal: ")
	preOrderRecursive(root)
}
