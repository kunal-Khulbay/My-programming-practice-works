import java.util.Scanner;

/**
 * Practice_set_1_chapter_1
 */
public class Practice_set_1_chapter_1 {

    public static void main(String[] args) {
        // 1. Write a Program to sum three numbers in java?
        // Scanner sc=new Scanner(System.in);
        // System.out.println("Enter a 1st Number");
        // int n1=sc.nextInt();
        // System.out.println("Enter a 2st Number");
        // int n2=sc.nextInt();
        // System.out.println("Enter a 3st Number");
        // int n3=sc.nextInt();
        // int sum=n1+n2+n3;
        // System.out.println("Sum is:"+sum);
        // sc.close();
        // 2. Write a Program to calculate CGPA using the amrks of three subjects.
        // float m1, m2, m3, result;
        // Scanner sc = new Scanner(System.in);

        // System.out.print("Write your marks of 5 subjects out of 100");
        // System.out.print("\n Enter the marks of 1st subject:");
        // m1 = sc.nextFloat();
        // System.out.print("\n Enter the marks of 2nd subject:");
        // m2 = sc.nextFloat();
        // System.out.print("\n Enter the marks of 3rd subject:");
        // m3 = sc.nextFloat();
        // result = (m1 + m2 + m3)/30;
        // System.out.printf("\nCGPA is:%.2f\n", result );
        // sc.close();
        // 3. Write a java program which asks the user to enter his/her name and greets
        // them with Hello <name> have a good a day!.
        // String name;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enetr your Name");
        // name = sc.next();
        // System.out.println("Hello " + name + " have a good day!");
        // sc.close();
        // 4.Write a java progarm to convert klometer to meter.
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the distance in kilometers");
        // int km = sc.nextInt();
        // System.out.println("Distance in Miles= " + km * 0.6+ " Miles");
        // sc.close();
        // 5.Write a java program to check weather the entered number is integer or not.
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your Number:");
        System.out.println(sc.hasNextInt());
        sc.close();
    }
}