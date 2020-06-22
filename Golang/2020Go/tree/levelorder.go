package main

import "fmt"

type Node struct {
	val   int
	left  *Node
	right *Node
}

func heightOfTree(root *Node) int {
	if root == nil {
		return 0
	}

	var left = heightOfTree(root.left)
	var right = heightOfTree(root.right)

	if left > right {
		return left + 1
	} else {
		return right + 1
	}
}

func printLevel(root *Node, h int) {
	if root == nil {
		return
	}

	if h == 1 {
		fmt.Printf("%d ", root.val)
		return
	}
	if h > 1 {
		printLevel(root.left, h-1)

		printLevel(root.right, h-1)
	}
}

func levelOrder(root *Node) {
	if root == nil {
		return
	}
	var height = heightOfTree(root)
	fmt.Printf("Height of a tree : %d \n", height)
	for i := 1; i <= height; i++ {
		printLevel(root, i)
	}
}

func main() {
	// BST Representation
	//         100
	//        /   \
	//      50    150
	//     / \    /  \
	//   20  80  110 200
	//  /  \
	// 10  30

	root := Node{100, nil, nil}
	root.left = &Node{50, nil, nil}
	root.right = &Node{150, nil, nil}
	root.left.left = &Node{20, nil, nil}
	root.left.left.left = &Node{10, nil, nil}
	root.left.left.right = &Node{30, nil, nil}
	root.left.right = &Node{80, nil, nil}
	root.right.left = &Node{110, nil, nil}
	root.right.right = &Node{200, nil, nil}

	fmt.Println("Level Order Traversal : ")
	levelOrder(&root)

}
