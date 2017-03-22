import java.util.*;
class dup{
        public static void main(String[] agrs){
                HashMap<Character,Integer> hm = new HashMap<Character,Integer>();
                String x = "Hello world!123123";
                for (int i= 0;i<x.length();i++){
                        if(hm.get(x.charAt(i))==null){
                                hm.put(x.charAt(i),1);
                        }
                        else{
                                hm.put(x.charAt(i), hm.get(x.charAt(i)) + 1);
                        }
                }
                for(Map.Entry m:hm.entrySet()){
                        System.out.println(m.getKey()+" "+m.getValue());
                }

        }
}
