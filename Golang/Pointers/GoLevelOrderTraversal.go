package main

func main(){
	root:= &TreeNode{45,nil,nil}
	root.left = &TreeNode{65, nil,nil}
	root.right =  &TreeNode{75, nil,nil}
	root.right.left = &TreeNode{85, nil,nil}
	root.right.right = &TreeNode{95,nil,nil}
	root.left.left = &TreeNode{45, nil,nil}
	root.left.right = &TreeNode{35, nil,nil}

	depth = HeightOfTree(root)
}
