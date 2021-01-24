import java.util.Scanner;

/**
 * Exercise1_Percentage_calculatotor
 */
public class Exercise1_Percentage_calculatotor {

    public static void main(String[] args) {
        float total_Marks, m1, m2, m3, m4, m5, result;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the total marks (For eg 100,80etc):");
        total_Marks = sc.nextFloat();

        System.out.print("Write your marks of 5 subjects out of 100");
        System.out.print("\n Enter the marks of 1st subject:");
        m1 = sc.nextFloat();
        System.out.print("\n Enter the marks of 2nd subject:");
        m2 = sc.nextFloat();
        System.out.print("\n Enter the marks of 3rd subject:");
        m3 = sc.nextFloat();
        System.out.print("\n Enter the marks of 4th subject:");
        m4 = sc.nextFloat();
        System.out.print("\n Enter the marks of 5th subject:");
        m5 = sc.nextFloat();
        result = ((m1 + m2 + m3 + m4 + m5) / (total_Marks * 5)) * 100;
        System.out.println("\nYour percentage is:" + result + "%");
        sc.close();
    }
}