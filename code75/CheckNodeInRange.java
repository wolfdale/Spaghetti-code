class Node {
    int data;
    Node left;
    Node right;

    Node (int data){
        this.data = data;
    }
}

class Meta {
    int range;
    Meta(int range){
        this.range = this.range;
    }
    public void incr(){
        this.range++;
    }
}

public class CheckNodeInRange {
    public static void main(String[] args) {
        Node root = new Node(10);
        root.left = new Node(5);
        root.left.left = new Node(1);

        root.right = new Node(50);
        root.right.left = new Node(40);
        root.right.left.left = new Node(35);
        root.right.right = new Node(100);
        Meta m = new Meta(0);
        m = countNodeInRange(root, m, 1, 100);
        System.out.println("Node in range : " + m.range);

    }

    public static Meta countNodeInRange(Node root, Meta m, int low, int high) {
        if(root == null){
            return m;
        }
        
        if(root.data > low && root.data < high) {
            m.incr();
            m = countNodeInRange(root.left, m, low, high);
            m = countNodeInRange(root.right, m, low, high);
        }
        else if(root.data < low)
        {
            m = countNodeInRange(root.right, m, low, high);
        }
        else{
            m = countNodeInRange(root.left, m, low, high);
        }
        return m; 
        
    }

}
