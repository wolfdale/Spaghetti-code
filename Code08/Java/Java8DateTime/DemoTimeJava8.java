import java.time.*;

class DemoTimeJava8{
	public static void main(String[] args){
		// Getting local date/time/datetime
		LocalDate d1 = LocalDate.now();
		System.out.println(d1);
		LocalTime t1 = LocalTime.now();
		System.out.println(t1);
		LocalDateTime dt = LocalDateTime.now();
		System.out.println(dt);
		
	}
}
