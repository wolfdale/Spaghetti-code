package main

import "fmt"

// Tree Node
type treeNode struct {
	data  int64
	left  *treeNode
	right *treeNode
}

// Common Tree Traversing Functions

func inOrderTraversal(root *treeNode) {
	if root == nil {
		return
	}

	inOrderTraversal(root.left)
	fmt.Printf("%d ", root.data)
	inOrderTraversal(root.right)
}

func PreOrderTraversal(root *treeNode) {
	if root == nil {
		return
	}
	fmt.Printf("%d ", root.data)
	PreOrderTraversal(root.left)
	PreOrderTraversal(root.right)
}

func PostOrderTraversal(root *treeNode) {
	if root == nil {
		return
	}

	PostOrderTraversal(root.left)
	PostOrderTraversal(root.right)
	fmt.Printf("%d ", root.data)
}

// Height of Tree
func HeightOfTree(root *treeNode) int64 {
	if root == nil {
		return 0
	}

	leftSide := HeightOfTree(root.left)
	rightSide := HeightOfTree(root.right)

	if leftSide > rightSide {
		return 1 + leftSide
	} else {
		return 1 + rightSide
	}
}


// Advance Tree Traversal
// 1) Level Order Traversal
// 2) Zig-Zag Level Order Traversal
