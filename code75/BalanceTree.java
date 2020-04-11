
import java.util.*;

class Node {
    int data;
    Node left;
    Node right;
    public Node(int data) {
        this.data = data;
    }
}

/**
 * Skewed BST to Balanced BST
 **/
class BalanceTree {
    public static void main(String[] args) {

        Node root = new Node(500);
        root.left = new Node(400);
        root.left.left = new Node(330);
        root.left.left.left = new Node(290);
        root.left.left.left.left = new Node(130);
        root.left.left.left.left.left = new Node(60);
        root.left.left.left.left.left.left = new Node(30);
        root.left.left.left.left.left.left.left = new Node(20);
    
        root = balanceItUp(root);
        printPreorder(root);

    }

    static void printPreorder(Node root)
    {
        if(root == null) {
            return;
        }
        else {
            System.out.print(root.data + " ");
            printPreorder(root.left);
            printPreorder(root.right);
        }

    }

    static List<Integer> storeInArray(Node root, List<Integer> treeList)
    {
        if(root == null) {
            return treeList;
        }
        storeInArray(root.left, treeList);
        treeList.add(root.data);
        storeInArray(root.right, treeList);
        return treeList;
    }
    
    static Node balanceItUp(Node root) {
        //Store it in list
        //use middle approach to re-build tree

        List<Integer> tree = new LinkedList<>();
        tree = storeInArray(root, tree);
        System.out.println(tree);
        root = buildBalanceBST(tree, 0, tree.size()-1);
        return root;
    }
    
    static Node createNode(int data)
    {
        return new Node(data);
    }

    static Node buildBalanceBST(List<Integer> sortedList, int low, int high){
        if (low > high){
            return null;
        }
        
        int mid = (low+high)/2;
        Node n = new Node(sortedList.get(mid));
        n.left = buildBalanceBST(sortedList, low, mid-1);
        n.right = buildBalanceBST(sortedList, mid+1, high);
        
        return n;

    }
}






