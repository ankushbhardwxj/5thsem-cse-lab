import java.util.Scanner;
public class swap{
  public static void main(String args[]){
    int a,b;
    Scanner s = new Scanner(System.in);
    System.out.print("enter numbers");
    a=s.nextInt();
    b=s.nextInt();
    a=a+b;
    b=a-b;
    a=a-b;
    System.out.print("After swap: ");
    System.out.print(a);
    System.out.print(b);
  }
}
