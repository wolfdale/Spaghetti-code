import java.time.*;

class DemoTimeJava8API{
	public static void main(String[] args){
		// Getting local date/time/datetime
		LocalDate d1 = LocalDate.now();
		System.out.println(d1);
		LocalTime t1 = LocalTime.now();
		System.out.println(t1);
		LocalDateTime dt = LocalDateTime.now();
		System.out.println(dt);
		
		//Formatting Date/Time/DateTime
		d1 = LocalDate.of(2015,Month.JANUARY,1);
		System.out.println(d1);
		
		// hours and minutes
		t1 = LocalTime.of(6,53);
		System.out.println(t1);
		
		// hours minutes seconds
		t1 = LocalTime.of(6,54,34);
		System.out.println(t1);
		
		// DateTIme
		dt = LocalDateTime.of(2015,Month.JANUARY,14,7,53,13);
		System.out.println(dt);
		
	}
}
