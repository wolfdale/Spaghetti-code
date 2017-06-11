package JunitTesting.V1;

import static org.junit.Assert.*;

import org.junit.Test;
import org.mockito.Mockito;
import static org.mockito.Mockito.doReturn;

public class UserServiceTest {
	@Test
	public void TestUserService(){
		UserService userservice = new UserService();
		//Need Mocking of UserManager Class
		UserManager mockObj = Mockito.mock(UserManager.class);
		//Mockito.when(usermanager.getUserCount()).thenReturn(50);
		doReturn(Integer.valueOf(50)).when(mockObj).getUserCount();
		assertEquals(50, userservice.getUserCount());
		
		
		
	}

}
