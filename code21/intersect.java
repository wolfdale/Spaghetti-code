class Intersect
{
	int intersectPoint(Node head1, Node head2)
	{
	     int h1 = length(head1);
	     int h2 = length(head2);
         int diff = Math.abs(h1 - h2);
         if(h1>h2){
             return intersect(diff, head1, head2);
         }else{
             return intersect(diff, head2, head1);
         }
	}
	
	int intersect(int d, Node X, Node Y){
	     while(d!=0){
             X = X.next;
             d--;
         }
         
         while(X!=null && Y!=null){
             if(X==Y){
                 return X.data;
             }
             X=X.next;
             Y=Y.next;
         }
         return -1;
	}
	
	int length(Node head){
	    int len = 0;
	    Node temp = head;
	    while(temp!=null){
	        temp = temp.next;
	        len++;
	    }
	    return len;
	}
}
