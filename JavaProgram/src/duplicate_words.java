import java.util.*;
class dup{
        public static void main(String[] agrs){
                HashMap<String,Integer> hm = new HashMap<String,Integer>();
                String x = "Hello World Hello World This is Cool";
                String[] arr = x.split("\\s+");

                for (int i= 0;i<arr.length;i++){
                        if(hm.get(arr[i])==null){
                                hm.put(arr[i],1);
                        }
                        else{
                                hm.put(arr[i], hm.get(arr[i]) + 1);
                        }
                }
                for(Map.Entry m:hm.entrySet()){
   System.out.println(m.getKey()+" "+m.getValue());
  }

        }
}
