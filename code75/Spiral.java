class Node {
    int data;
    Node right;
    Node left;

    Node(int data) {
        this.data = data;
    }
}

/**
 * Spriral Level Order
 */
class Spiral {
    public static void main(String[] args) {
        Node root = new Node(88);
        root.left = new Node(77);
        root.right = new Node(66);
        root.left.left = new Node(55);
        root.left.right = new Node(44);
        root.right.left = new Node(33);
        root.right.right = new Node(22);
        root.left.left.left = new Node(11);
        root.right.right.right = new Node(1);
        
        int n = height(root);
        spiral(root,n);
    }
    
    static int height(Node root) {
        if(root == null) {
            return 0;
        }
        else {
            int l = height(root.left);
            int r = height(root.right);
            if(l>r) {
                return l+1;
            } else {
                return r+1;
            }
        }
    }

    static void spiral(Node root, int h) {
        for(int i=1;i<=h;i++) {
            // I used odd-even for fun.
            if(i%2==0) {
                printLevelOrder(root, i, true);
            }
            else {
                printLevelOrder(root, i, false);
            }
            
            System.out.println();
        }
    }            

    static void printLevelOrder(Node root, int h, boolean dir) {
        if(root == null)
        {
            return;
        }
        
        if(h==1) {
            System.out.print(root.data);
        }
        else if(h > 1){
            if(dir){
                printLevelOrder(root.left, h-1, dir);
                printLevelOrder(root.right, h-1, dir);
            }
            else {
                printLevelOrder(root.right, h-1, dir);
                printLevelOrder(root.left, h-1, dir);
            }
        }
    }        

}
                


