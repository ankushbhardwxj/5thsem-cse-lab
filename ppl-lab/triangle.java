import java.util.Scanner;
public class triangle{
  public static void main(String args[]){
    double h,b,ar;
    Scanner s = new Scanner(System.in);
    System.out.print("Enter h,b: ");
    h = s.nextInt();
    b = s.nextInt();
    ar = 0.5 * h * b;
    System.out.print(ar);
  }
}
