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
    public ListNode partition(ListNode head, int x) {
        ListNode low = new ListNode();
        ListNode low_anchor = low;
        ListNode high = new ListNode();
        
        ListNode anchor_high = high ;
        
        ListNode temp = head;
        
        while(temp!=null) {
            if (temp.val < x) {
                low.next = temp;
                low = temp;
            }
            else {
                high.next = temp;
                high = temp;
            }
            
            temp = temp.next;
        }
        
        
        low.next = anchor_high.next;
        high.next = null;
        
        return low_anchor.next;
        
    }
}
