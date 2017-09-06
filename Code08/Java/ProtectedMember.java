//Protected member can be accessed within same package 
// no need for inheriting class
class ProtectedMember{
	protected int x = 12;
}


class ProtectedDemo{
	public static void main(String[] args){
		ProtectedMember pt = new ProtectedMember();
		System.out.println(pt.x);
	}
}
