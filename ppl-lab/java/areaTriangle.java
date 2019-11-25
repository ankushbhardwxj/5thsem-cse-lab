import java.util.*;
public class areaTriangle {
	public static void main(String args[]){
		double h,b,ar;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter base & height:");
		h = s.nextInt();
		b = s.nextInt();
		ar = 0.5 * b * h;
		System.out.println("Area:" + ar);
	}
}
