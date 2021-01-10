class Palindrome
{
    // Function to check if linked list is palindrome
    boolean isPalindrome(Node head) 
    {
        if(head==null) return true;
        
        Node slow = head;
        Node fast = head;
        int len = length(head);
        
        while(fast!=null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            
        }
        
        Node mid = reverse(slow);
        Node curr = head;
        
        while(mid != null && curr!=null){
            if(mid.data != curr.data){
                return false;
            }
            curr = curr.next;
            mid = mid.next;
        }
        
        return true;
        
    }    
    
    public Node reverse(Node head){
        Node prev = null;
        Node curr = head;
        Node ne = null;
        
        while(curr!=null){
            ne = curr.next;
            curr.next = prev;
            prev = curr;
            curr = ne;
        }
        
        head = prev;
        
        return head;
        
    }
}

