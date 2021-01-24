import java.util.Scanner;

/**
 * Roots_of_Quadratic_Equations
 */
public class Roots_of_Quadratic_Equations {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter A:");
        double a = scanner.nextDouble();
        System.out.println("Enter B:");
        double b = scanner.nextDouble();
        System.out.println("Enter C:");
        double c = scanner.nextDouble();
        double Decriminent = b * b - 4 * a * c, root1, root2;
        if (Decriminent > 0) {
            root1 = (-b + Math.sqrt(Decriminent)) / (2 * a);
            root2 = (-b - Math.sqrt(Decriminent)) / (2 * a);
            System.out.format("Root 1 is=%.2f and Root2=%.2f\n", root1, root2);
        } else if (Decriminent == 0) {
            root1 = root2 = -b / (2 * a);
            System.out.format("Root1=Root2=%.2f\n", root1);
        } else {
            double realpart = -b / (2 * a);
            double imagnarypart = Math.sqrt(-Decriminent) / (2 * a);
            System.out.format("Root1=%.2f+%.2fi and Root2= %.2f-%.2fi\n", realpart, imagnarypart, realpart,
                    imagnarypart);
        }
        scanner.close();
    }
}