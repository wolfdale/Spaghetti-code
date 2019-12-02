
class rmDup {
    public ListNode deleteDuplicates(ListNode head) {
        
        if(head == null){
            return head;
        }
        
        ListNode curr = head;
        while(curr != null){
            ListNode temp = curr;
            
            while(temp != null && temp.val == curr.val ){
                temp = temp.next;
            }
            curr.next = temp;
            curr = temp;
        }
        
        
        return head;
        
    }
}
