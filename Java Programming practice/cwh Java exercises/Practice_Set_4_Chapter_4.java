// import java.util.Scanner;

/**
 * Practice_Set_4_Chapter_4
 */
public class Practice_Set_4_Chapter_4 {

    public static void main(String[] args) {
        // 1.What will be the output of the program.
        // bnextByte a =10;
        // if (a=11) {
        // System.out.prbnextByteln("Iam 11");
        // }
        // else{
        // System.out.prbnextByteln("Iam not 11");
        // }
        // This prgram will give an Error as if needs a condition.
        // 2.Write a progarm to find out weather a student is pass or fail if it
        // requires total 40% and atleast 33% in each subject to pass. Assume 3 subjects
        // and take marks as an input form the user.
        // byte m1, m2, m3;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the marks of 1st subject");
        // m1 = sc.nextByte();
        // System.out.println("Enter the marks of 2nd subject");
        // m2 = sc.nextByte();
        // System.out.println("Enter the marks of 3rd subject");
        // m3 = sc.nextByte();
        // float avg = (m1 + m2 + m3) / 3.0f;
        // if (m1 >= 33 && m2 >= 33 && m3 >= 33 && avg >= 40) {
        // System.out.println("Congratulations,You are promoted");
        // } else {
        // System.out.println("Sorry,You are not promroted");
        // }
        // sc.close();
        // 3.Calculate income tax to be paid by the employee of government as per the
        // slabs mentiuoned below:
        // Income slab Tax
        // 2.5L-5.0L----- 5%
        // 5.0L-10.0L----- 10%
        // Above 10.L----- 20%.
        // Note there will be n any tax below 2.5L.Take ammount input from the user.
        // float income, tax = 0;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the income");
        // income = sc.nextFloat();
        // if (income < 2.5) {
        // tax = tax + 0;
        // } else if (income > 2.5f && income <= 5.0f) {
        // tax = tax + 0.05f * (income - 2.5f);
        // } else if (income > 5.0f && income <= 10.0f) {
        // tax = tax + 0.05f * (5.0f - 2.5f);
        // tax = tax + 0.2f * (income - 2.5f);
        // } else if (income > 10.0f) {
        // tax = tax + 0.05f * (5.0f - 2.5f);
        // tax = tax + 0.2f * (10.0f - 5.0f);
        // tax = tax + 0.3f * (income - 10.0f);
        // }
        // System.out.println("The total ta paid by the mployee is:" + tax);
        // sc.close();
        // 4.Write a java program to find out the day of the week given the number [1
        // for Monday,2 for tuesday,and so onn]
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number");
        // int number = sc.nextInt();
        // switch (number) {
        //     case 1 -> System.out.println("Monday");
        //     case 2 -> System.out.println("Tuesday");
        //     case 3 -> System.out.println("Wednesday");
        //     case 4 -> System.out.println("Thusday");
        //     case 5 -> System.out.println("Friday");
        //     case 6 -> System.out.println("Saturday");
        //     case 7 -> System.out.println("Sunday");
        //     default -> System.out.println("Enjoy your Life");
        // }
        // System.out.println("Thanks for using");
        // 5. WRite a java program to find weather a year entered by the user is leap or
        // not.
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the year to check weather it is leap or not");
        // int year = sc.nextInt();
        // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // System.out.printf("%d is a Leap year\n", year);
        // } else {
        // System.out.printf("%d is not a Leap year\n", year);
        // }
        // sc.close();
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Website");
        // String website = sc.nextLine();
        // if (website.endsWith(".org")) {
        // System.out.println("This is an organisational website");
        // } else if (website.endsWith(".com")) {
        // System.out.println("This is an commercial website");
        // } else if (website.endsWith(".in")) {
        // System.out.println("This is an Indian website");
        // }
        // sc.close();
    }
}