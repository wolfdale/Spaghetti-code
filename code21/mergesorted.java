class LinkedList
{
    Node sortedMerge(Node headA, Node headB) {
        Node curr = new Node(Integer.MAX_VALUE);
        Node head = curr;
        
        while(headA!=null && headB!=null){
            if(headA.data<headB.data){
                curr.next = headA;
                headA = headA.next;
                
            }else{
                curr.next = headB;
                headB = headB.next;
            }
            curr = curr.next;
        }
        
        if(headA!=null){
            curr.next = headA;
        }
        
        if(headB!=null){
            curr.next = headB;
        }
        
        return head.next;
    } 
}

