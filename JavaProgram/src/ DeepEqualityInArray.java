import java.util.Arrays;
class DeepEqualityInArray{
	public static void main(String [] args)
	{
		int a[] = {1,2,3,4,5,6};
		int b[] = {1,2,3,4,5,6};
		//we are just checking quality of references of array objects(not eqaul)
		if(a == b)
		{
			System.out.println("Both Same");
		}
		else
		{
			System.out.println("Not same");
		}
		//Now it will compare element by element
		if(Arrays.equals(a,b))
		{
			System.out.println("Both Same");
		}
		else
		{
			System.out.println("Not Same");
		}
		
		//Deep array Equality (array inside array)Nested Array
		Object[] arr1 = {a};
		Object[] arr2 = {b};
		if(Arrays.deepEquals(arr1,arr2))
		{
			System.out.println("Equals");
		}
		else
		{
			System.out.println("Not Equals");
		}
	}
	
}
