package JunitTesting.V1;

import static org.junit.Assert.*;

import org.junit.Test;

public class runnerTest {

	runner xrun = new runner();
	int ADDresult = xrun.adder(10,10);
	int MULresult = xrun.multiply(5,4);
	@Test
	public void testadder() {
		assertEquals(20, ADDresult);	
		
	}
	@Test
	public void testmultiply(){
		assertEquals(20, MULresult);
	}

}
