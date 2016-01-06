class Super
{
	int i,j;
	
	void set_ij(int x,int y)
	{
		i=x;
		j=y;
	}
	
	void show()
	{
		System.out.println(i);
		System.out.println(j);
	}
	
}

//Inheritance
class Sub extends Super
{
	

	int k;
	
	void set_k(int z)
	{
		k=z;
	}
	
	void show()
	{
		System.out.println(k);
	}
	
	void sum()
	{
		System.out.println(i+j+k);
	}
	
	
}



public class InhertDemo {

	public static void main(String[] args) {
		
		Super obj_super = new Super();
		obj_super.set_ij(5,6);
		
		
		

	}

}
