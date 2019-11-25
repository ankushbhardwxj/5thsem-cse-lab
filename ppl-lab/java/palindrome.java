import java.util.*;
public class palindrome{
	public static void main(String args[]){
		int n;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter number:");
		n = s.nextInt();
		int t = n;
		int r = 0;
		while(t>0){
			r = r*10 + t%10;
			t = t / 10;
		}
		if(r==n)
			System.out.println("Palindrome");
		else
			System.out.println("Not palindrome");
	}
}
