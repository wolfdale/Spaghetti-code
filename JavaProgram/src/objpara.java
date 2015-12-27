class equal_test
{
	int i,j;
	equal_test(int a,int b)
	{
		i=a;
		j=b;
	}
	boolean test_equality(equal_test o)
	{
		if(o.i == o.j)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}




public class objpara {

	public static void main(String[] args) {
		
		boolean result = false;
		equal_test obj1 = new equal_test(5 ,6);
		obj1.test_equality(obj1);
		System.out.println(result);
		
		equal_test obj2 = new equal_test(5 ,5);
		obj2.test_equality(obj2);
		System.out.println(result);
		
	}

}
