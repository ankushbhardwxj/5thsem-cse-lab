import java.util.*;
public class leapyear{
	public static void main(String args[]){
		int year;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter year:");
		year = s.nextInt();
		if(year%4==0 && year%100==0 && year%400==0)
			System.out.println("Leap year");
		else if (year%4==0 && year%100!=0)
			System.out.println("Leap year");
		else
			System.out.println("Not leap year");
	}
}
