package main

import "fmt"

type Node struct {
	val   int
	left  *Node
	right *Node
}


func levelOrder(root *Node) {
	if root == nil {
		return
	}
	var height = heightOfTree(root)
	fmt.Printf("Height of a tree : %d \n", height)
	fmt.Printf("Level Order Traversal : \n")

	for i := 1; i <= height; i++ {
		printLevel(root, i)
	}

	fmt.Printf("\n")
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

	levelOrder(&root)

}
