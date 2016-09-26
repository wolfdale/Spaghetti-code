import java.text.DecimalFormat;

class IntegerConversion
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int x = 10_000_000;
		String str1 = Integer.toString(x);
		System.out.println(str1);
		//Just to be sure it worked
		System.out.println(str1.length());
		Integer obj = new Integer(6700);
		String str2 = obj.toString();
		System.out.println(str2);
		//Just to be sure it worked
		System.out.println(str2.length());
		
		//Printing Numbers in decimal format
		int y = 1000000;
		DecimalFormat df = new DecimalFormat("#,###,###");
		String str3 = df.format(y);
		System.out.println(str3);
		
		//Binary , octal and hex conversion
		String bin = Integer.toBinaryString(y);
		System.out.println(bin);
		
		String hex = Integer.toHexString(y);
		System.out.println(hex);
		
		String oct = Integer.toOctalString(y);
		System.out.println(oct);
		
		
		
		
	}
}
