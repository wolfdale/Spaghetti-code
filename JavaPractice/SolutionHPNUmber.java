/*Leetcode happy number*/

class SolutionHPNUmber {
    public boolean isHappy(int n) {
        int temp = n;
        List<Integer> arr = new ArrayList<Integer>();
        if(n<0 || n == 0){
            return false;
        }
        while(true) {
            
            int theta = temp;
            int sum = 0;            
            
            while(theta > 0){
                int t1 = theta %10;    
                sum = sum + t1*t1;
                theta = theta/10;
            }
            
            if(sum == 1){
                return true;
            }
            
            if(arr.contains(sum)){
                return false;
            }
            else{
                arr.add(sum);
            }
            temp = sum;
        }
        
    }
}
