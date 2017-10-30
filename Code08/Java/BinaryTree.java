class Node{
	int data;
	Node left, right;
	Node(int x){
		data = x;
		left = null;
		right = null;
	}
}


class BinaryTree{
	static Node root; 
	
	BinaryTree(){
		root = null;
	}
	static void inorder(Node root){
		if(root == null){
			return;
		}
		else{
			inorder(root.left);
			System.out.println(root.data);
			inorder(root.right);
		}
	}
	
	public static void main(String [] args){
		BinaryTree bt = new BinaryTree();
		bt.root = new Node(1);
		bt.root.left = new Node(2);
		bt.root.right = new Node(3);
		
		inorder(root);
	}
	
	
}
