import java.util.*;
public class swap {
	public static void main(String[] args){
		int a,b,t;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter values");
		a = s.nextInt();
		b = s.nextInt();
		System.out.println("Swapped");
		t = a;
		a = b;
		b = t;
		System.out.println(a);
		System.out.println(b);
	}
}
