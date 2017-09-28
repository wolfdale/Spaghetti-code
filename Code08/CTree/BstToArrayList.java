import java.util.*;
class Node{
	int data;
	Node left,right;
	Node(int d){
		data = d;
		left=right=null;
	}
}

class BST{
	Node root;
	BST(){
		root = null;
	}
	
	void insert(int key){
		root = insertUtil(root, key);
	}
	
	
	Node insertUtil(Node root,int key){
		if (root == null){
			root = new Node(key);
		}
		else{
			if(key<root.data){
				root.left = insertUtil(root.left,key);
			}
			else{
				root.right = insertUtil(root.right,key);
			}
			
		}
		return root;
	}
	void inorder(){
		inorderUtil(this.root);
	}
	
	void inorderUtil(Node root){
		if(root==null){
			return;
		}
		else{
			inorderUtil(root.left);
			System.out.println(root.data);
			inorderUtil(root.right);
		}
	}
	ArrayList<Integer> convertToList(Node root, ArrayList<Integer> list){
		if(root==null){
			return list;
		}
		else{
			convertToList(root.left, list);
			list.add(root.data);
			convertToList(root.right, list);
		}
		return list;
	}		
		
}



class runner{
	public static void main(String[] arg){
		BST b = new BST();
		b.insert(1);
		b.insert(2);
		b.insert(3);
		b.insert(4);
		b.insert(5);
		b.insert(6);
		b.insert(7);
		b.insert(8);
		b.inorder();
		ArrayList<Integer> a1 = new ArrayList<Integer>();
		ArrayList<Integer> a2 = b.convertToList(b.root,a1);
		for(Integer x : a2){
			System.out.println("-->" + x);
		}
	}
}
