class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
    }
}

public class TreeNode {
    public static void main(String[] args) {
        Node root = new Node(5);

        root.left = new Node(4);
        root.right = new Node(6);
        
        int height = calculateHeight(root);
        System.out.println("Tree Height "+ height);
    }

    static int calculateHeight(Node root) {
        if (root == null) {
            return 0;
        }
        else {
            int left = calculateHeight(root.left);
            int right = calculateHeight(root.right);

            if (left > right) { 
                return left+1;
            } else {
                return right+1;
            }
        }

    }
}
