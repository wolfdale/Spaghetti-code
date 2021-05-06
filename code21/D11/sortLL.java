/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode sortList(ListNode head) {
        if(head == null) {
            return null;
        }
        
        if(head.next == null){
            return head;
        }
        
        // Get to middle
        ListNode middle = head;
        ListNode fast = head;
        ListNode prev = null;
        
        while(fast!=null && fast.next != null){
            fast = fast.next.next;
            prev = middle;
            middle = middle.next;
        }
        prev.next = null;
        ListNode left = sortList(head);
        ListNode right = sortList(middle);

        return merge(left, right);
    }
    
    public ListNode merge(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode();
        ListNode temp = dummy;
        
        while(l1!=null && l2!=null) {
            if(l1.val < l2.val) {
                temp.next = l1;
                l1 = l1.next;
                temp = temp.next;
            }
            else {
                temp.next = l2;
                l2 = l2.next;
                temp = temp.next;
            }
        }
        
        if(l1!=null) {
            temp.next = l1;
        }else {
            temp.next = l2;
        }
        
        return dummy.next;
        
        
        
        
        
    }
}
