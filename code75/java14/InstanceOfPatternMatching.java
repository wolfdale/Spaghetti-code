// javac InstanceOfPatternMatching.java --enable-preview --release 14 -Xlint:preview
// java --enable-preview InstanceOfPatternMatching

class Employee {
	private String firstName;
	private String middleName;
	private String lastName;
	
	// Getter & Setters
}

class Manager extends Employee {
	private int teamSize;
	
	public Manager(int teamSize) {
		this.teamSize = teamSize;
	}
	
    public int getTeamSize() {
        return this.teamSize;
    }
	
	// Getter & Setter
}

class SupportPersonel extends Employee {
	private String workingHours; 
	
	// More Stuff
	
	// Getter & Setter
}

class InstanceOfPatternMatching {
	public static void main(String[] args) {
		Employee emp = new Manager(12);
        
        // Java 14 instanceof with && operator, scope of binding variable.
		if (emp instanceof Manager manager && manager.getTeamSize() > 10) {
			System.out.println("Manager Team Size "+ manager.getTeamSize());
		}
	}
}
