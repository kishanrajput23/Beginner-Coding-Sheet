import java.util.Scanner;

public class Q_4 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        double a, b, c, x1, x2, descriminant, real_part, img_part;
        System.out.print("Enter the value of a ");
        a = sc.nextDouble();
        System.out.print("Enter the value of b ");
        b = sc.nextDouble();
        System.out.print("Enter the value of c ");
        c = sc.nextDouble();
        
        descriminant = b*b - 4*a*c;
        
        if (descriminant > 0) {
        x1 = (-b + Math.sqrt(descriminant)) / (2*a);
        x2 = (-b - Math.sqrt(descriminant)) / (2*a);

        System.out.println("The roots are real and different");
        System.out.println("x1 = " + x1);
        System.out.println("x2 = " + x2);
    }

    else if (descriminant == 0) {
        System.out.println("The roots are real and same");
        x1 = -b / (2*a);
        System.out.println("x1 = x2 = " + x1);
    }

    else {
        real_part = -b/(2*a);
        img_part = Math.sqrt(-descriminant) / (2*a);
        System.out.println("The roots are complex and different");
        System.out.println("x1 = " + real_part + " + " + img_part + "i");
        System.out.println("x2 = " + real_part + " - " + img_part + "i");
    }
        
        
    }
}