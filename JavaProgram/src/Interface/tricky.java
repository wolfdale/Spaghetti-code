interface Fruit{
	//variable in interface are static and Final
	
	public String TYPE = "Apple";
}

class FruitClass implements Fruit{

}

class tricky{
	public static void main(String[] args)
	{
		System.out.println(FruitClass.TYPE);
	}
}
