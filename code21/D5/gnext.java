class solve{
    public static long[] nextLargerElement(long[] arr, int n) { 
        Stack<Long> st = new Stack<Long>();
        long[] result = new long[arr.length];
        for(int i=arr.length-1; i>=0;i--){
            if(st.isEmpty()){
                result[i]=-1;
                st.push(arr[i]);
            }
            else{
                while(!st.isEmpty() && arr[i] > st.peek()){
                    st.pop();
                }
                if(st.isEmpty()){
                    result[i] = -1;
                    
                }else{
                    result[i] = st.peek();
                }
                st.push(arr[i]);
                
            }
        }
        return result;
    } 
}
