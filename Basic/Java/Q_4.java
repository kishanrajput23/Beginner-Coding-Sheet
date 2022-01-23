import java.util.Scanner;

public class Q_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of dividend ");
        int dividend = sc.nextInt();
        System.out.print("Enter the value of divisor ");
        int divisor = sc.nextInt();
        int quotient = dividend / divisor;
        int remainder = dividend % divisor;
        System.out.println("The quotient is " + quotient);
        System.out.println("The remainder is " + remainder);
    }
}