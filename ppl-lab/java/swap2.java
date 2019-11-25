import java.util.*;
public class swap2 {
	public static void main(String args[]){
		double a,b;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the values: ");
		a = s.nextInt();
		b = s.nextInt();
		a = a + b;
		b = a - b;
		a = a - b;
		System.out.println(a);
		System.out.println(b);
	}
}
