package JunitTesting.V1;

public class UserService {
	
	private final UserManager manager;
	
	public UserService(UserManager manager) {
		this.manager = manager;
	}
	
	public UserService(){
		this(new UserManager());
	}

	public int getUserCount(){
		try{
			return manager.getUserCount();
		}
		catch(Exception e){
			return -1;
		}
	}

}
