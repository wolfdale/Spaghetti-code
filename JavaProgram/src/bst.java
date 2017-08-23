class BinarySearchTree{
	class Node{
		int key;
		public Node(int item){
			key = item;
			left = right = null;
		}
	}
	
	Node root;
	
	BinarySearchTree(){
		root = null;
	}

	void insert(int key){
		root = insertRec(root,key);
	}
	
	Node insertRec(Node root, int key){
		if(root == null){
			root = new Node(key);
			return root;
		}
		
		if(key<root.key){
			root.left = insertRec(root.left,key);
		}
		else if(key>= root.key){
			root.right = insertRec(root.right,key);
		}
		return root;
	}

	void inorder(){
		inorderRec(root);
	}

	 void inorderRec(Node root) {
        if (root != null) {
            inorderRec(root.left);
            System.out.println(root.key);
            inorderRec(root.right);
        }
    }

	public static void main(String args[]){
		BinarySearchTree tree = new BinarySearchTree();
		tree.insert(90);
		tree.insert(4);
		tree.insert(100);
		tree.insert(10);
		tree.insert(20);
		tree.insert(40);
		tree.insert(80);
		tree.insert(11);
		tree.insert(89);
		tree.insert(76);
		tree.insert(33);
		tree.insert(44);
		
		inorder();

	}

}








