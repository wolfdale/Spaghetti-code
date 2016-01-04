import java.util.Random;

public class RandomNumbers {

	public static void main(String[] args) {
		
		Random random_gen = new Random();
		
		for(int i=0;i<10;i++)
		{
			int rand_numb = random_gen.nextInt(100); //0 to 99
			System.out.println(rand_numb);
			
		}

	}

}
