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
		if(o.i == i && j == o.j)
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
		
		
		equal_test obj1 = new equal_test(5 ,8);
		equal_test obj2 = new equal_test(5 ,5);
		obj1.test_equality(obj2);
		System.out.println(obj1.test_equality(obj2));
		
		
		
	}

}
