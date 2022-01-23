import java.util.Scanner;

public class Q_8 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of a : ");
        float a = sc.nextFloat();
        
        System.out.print("Enter the value of b : ");
        float b = sc.nextFloat();
        
        System.out.println("The multiplication of " + a + " & " + b + " is " + (a*b));
    }
}