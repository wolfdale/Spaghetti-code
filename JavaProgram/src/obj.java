//Where class and obj created stack or heap

class Collar{}

class Dog{
	Collar c; //instance variable
	String name; //instannce varibale
	//on stack
	public static void main(String[] args){
		Dog d; //on heap
		d = new Dog();
		d.go(d);
	}
	//on stack
	void go(Dog d){
		//on heap
		c = new Collar();
		d.setname("ABC");
	}
	//on stack
	void setname(String s){
		name = s;
		System.out.println(name);
	}
}

