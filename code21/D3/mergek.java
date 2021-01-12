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
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<ListNode> heap = new PriorityQueue<>((a, b) -> a.val-b.val);
        
        for(int i=0;i<lists.length;i++){
            ListNode curr = lists[i];
            
            //AddNodes to min heap
            while(curr!=null){
                ListNode node = curr.next;
                curr.next = null;
                heap.add(curr);
                curr=node;
            }
        }
        ListNode fin = new ListNode();
        ListNode curr = fin;
        while(!heap.isEmpty()){
            ListNode n = heap.poll();
            curr.next = n;
            curr = n;
        }
        
        return fin.next;
        
    }
}
