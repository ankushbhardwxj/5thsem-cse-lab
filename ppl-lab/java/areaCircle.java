import java.util.*;
public class areaCircle {
	public static void main(String args[]){
		double r,ar;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter radius:");
		r = s.nextInt();
		ar = 3.14 * r * r;
		System.out.println("Area: "+ar);
	}
}
