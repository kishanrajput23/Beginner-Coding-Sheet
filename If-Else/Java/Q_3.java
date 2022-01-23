import java.util.Scanner;

public class Q_3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        System.out.print("Enter the value of a ");
        a = sc.nextInt();
        System.out.print("Enter the value of b ");
        b = sc.nextInt();
        System.out.print("Enter the value of c ");
        c = sc.nextInt();
        
        if (a>b) {
            if (a>c) {
                System.out.println(a + " is a largest number");
            }
            else {
                System.out.println(c + " is a largest number");
            }
        }
        else {
            if (b>c) {
                System.out.println(b + " is a largest number");
            }
            else {
                System.out.println(c + " is a largest number");
            }
        }
    }
}