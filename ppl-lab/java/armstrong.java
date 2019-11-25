import java.util.*;
public class armstrong{
	public static void main(String args[]){
		int n;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter number:");
		n = s.nextInt();
		int num = n;
		int x = n;
		int count = 0;
		while(x > 0){
			count++;
			x = x / 10;
		}
		int temp = 0;
		int sum = 0; double result = 0;
		while(n>0){
			temp = n % 10;
			result = Math.pow(temp,count);
			sum += result;
			n = n / 10;
		}

		if(sum == num)
		System.out.println("Armstrong");
		else
		System.out.println("Not armstrong");
	}
}
