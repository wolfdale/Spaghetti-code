class gfg
{

   // Should rearrange given linked list such that all even
   // positioned Nodes are before odd positioned.
   // Returns new head of linked List.
    Node rearrangeEvenOdd(Node head)
    {
        if(head==null) return head;
        if(head.next==null) return head;
        Node temp = head;
        Node odd = new Node(Integer.MAX_VALUE);
        Node even = new Node(Integer.MAX_VALUE);
        int count = 1;
        Node fHead = odd;
        Node rHead = even;
        
        while(temp != null){
            if(count%2==0){
                even.next = temp;
                even = even.next;
            }else{
                odd.next = temp;
                odd = odd.next;
            }
            
            temp = temp.next;
            count++;
        }
        
        odd.next = rHead.next;
        
        return fHead.next;
        
        
    }
}

