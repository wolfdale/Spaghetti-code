/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        if (head == null) return null;
        
        // Create a basic copy & attach to original list
        Node temp = head; 
        
        while(temp != null) {
            Node ne = temp.next;
            
            
            Node dum = new Node(temp.val);
            dum.next = ne;
            temp.next = dum;
            
            temp = ne;
        }
        
        
        temp = head;
        
        while (temp != null) {
            Node ne = temp.next.next;
            if(temp.random != null) {
                temp.next.random = temp.random.next;
            }
            
            temp = ne;
        }
        
        Node dummy = new Node(0);
        temp = head;
        Node copy;
        Node copyItr = dummy;
        
        while(temp!=null) {
            Node ne = temp.next.next;
            
            copy = temp.next;
            copyItr.next = copy;
            copyItr = copy;
            
            temp.next = ne;
            
                
            temp = ne;
        }
        
        
        return dummy.next;
        
    }
}
