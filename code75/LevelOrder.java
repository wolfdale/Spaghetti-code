class Node {
    int data;
    Node left;
    Node right;
    
    public Node(int data) {
        this.data = data;
    }
}

class LevelOrder {
    public static void main(String[] args) {
        Node root = new Node(100);
        root.left = new Node(30);
        root.right = new Node(10);
        
        root.left.left = new Node(1);
        root.left.right = new Node(3);
        
        root.right.left = new Node(66);
        root.right.right = new Node(77);

        root.right.left.right = new Node(12345);
        
        int height = calHeight(root);
        printLevelOrder(root, height);
    }

    static int calHeight(Node root) {
        if(root == null) {
            return 0;
        }
        else {
            int l = calHeight(root.left);
            int r = calHeight(root.right);
            if(l>r) {
                return l+1;
            }
            else {
                return r+1;
            }
        }
    }

    static void printLevelOrder(Node root, int h)
    {
        for(int i = 0; i<=h; i++) {
            printlevel(root, i);
        }
    }

    static void printlevel(Node root, int h)
    {
        if(root == null){
            return;
        }
        if(h==1) {
            System.out.print(root.data + " ");
        }
        else if(h>1) {
            printlevel(root.left, h-1);
            printlevel(root.right, h-1);
        }
    }

}
