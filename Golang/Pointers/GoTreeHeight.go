package main

import (
	"fmt"
)

type TreeNode struct {
	data  int64
	left  *TreeNode
	right *TreeNode
}

func main() {
	root := &TreeNode{65, nil, nil}
	root.left = &TreeNode{85, nil, nil}
	root.right = &TreeNode{95, nil, nil}
	root.right.right = &TreeNode{95, nil, nil}
	root.right.right.right = &TreeNode{95, nil, nil}

	fmt.Print(heightOfTree(root))

}

func heightOfTree(root *TreeNode) int64 {
	if root == nil {
		return 0
	}

	leftSide := heightOfTree(root.left)
	rightSide := heightOfTree(root.right)

	if leftSide > rightSide {
		return 1 + leftSide
	} else {
		return 1 + rightSide
	}
}
