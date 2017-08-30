import java.util.*;
class FindDuplicate{
	static void showDuplicate(String str){
		HashMap<Character,Integer> hm = new HashMap<Character,Integer>();
		for(int i=0;i<str.length();i++){
			//Character x = hm.get(str.charAt(i));
			if(hm.containsKey(str.charAt(i))){
				System.out.println(str.charAt(i));
			}
			else{
				hm.put(str.charAt(i), 1);
			}
		}
		
	}
	public static void main(String[] args){
		showDuplicate("abca");
	}
}
