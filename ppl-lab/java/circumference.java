import java.util.*;
public class circumference{
	public static void main(String args[]){
		double r,c;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the radius:");
		r = s.nextDouble();
		c = 3.14 * 2 * r;
		System.out.println("Circumference:"+c);
	}
}
