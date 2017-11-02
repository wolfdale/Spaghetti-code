import java.util.*;
class Set_example
{
    public static void main(String[] args)
    {
        Set<String> hash_Set = new HashSet<String>();
        hash_Set.add("Paris");
        hash_Set.add("London");
        hash_Set.add("Rome");
        hash_Set.add("Rome");
        hash_Set.add("Norway");
        System.out.print("Set output without the duplicates");
 
        System.out.println(hash_Set);
 
        System.out.print("Sorted Set");
        Set<String> tree_Set = new TreeSet<String>(hash_Set);
        System.out.println(tree_Set);
    }
}
