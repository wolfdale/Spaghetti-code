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
    public void reorderList(ListNode head) {
        // Go to mid
        // reverse the second part
        // reaarange
        if(head==null || head.next ==null || head.next.next == null) return;
        
        ListNode slow = head;
        ListNode fast = head;
        ListNode prev = null;
        while(fast!=null && fast.next!=null){
            fast = fast.next.next;
            prev = slow;
            slow = slow.next;
        }
        // Break list
        prev.next = null;
        
        ListNode rev = rev(slow);
        
        head = rearrange(head, rev);
        
        
    }
    ListNode rearrange(ListNode h1, ListNode h2){
        ListNode fHead = new ListNode();
        ListNode curr = fHead;
        curr.next = h1;
        h1=h1.next;
        curr = curr.next;
        int count = 2;
        
        while(h1!=null && h2!=null){
            if(count%2==0){
                curr.next = h2;
                h2 = h2.next;
            }else{
                curr.next =h1;
                h1=h1.next;
            }
            curr = curr.next;
            count++;
        }
        
        if(h1!=null){
            curr.next = h1;
        }
        
        if(h2!= null){
            curr.next = h2;
        }
        
        return fHead.next;
        
    }
    
    ListNode rev(ListNode head){
        ListNode curr = head;
        ListNode prev = null;
        ListNode ne = null;
        
        while(curr!= null){
            ne = curr.next;
            curr.next = prev;
            prev = curr;
            curr = ne;
        }
        
        head = prev;
        return head;
    } 
}
