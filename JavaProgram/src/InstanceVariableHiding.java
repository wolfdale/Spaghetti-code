class Test{
	private int x = 40;
	void med(){
		int x = 10;
		System.out.println(this.x);
		System.out.println(x);
		
	}
}

class InstanceVariableHiding
{
	public static void main (String[] args) 
	{
		Test obj = new Test();
		obj.med();
	
	
	}
}
