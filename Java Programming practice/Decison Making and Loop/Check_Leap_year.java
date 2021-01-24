import java.util.Scanner;

/**
 * Check_Leap_year
 */
public class Check_Leap_year {

    public static void main(String[] args) {
        int year;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the year");
        year = sc.nextInt();
        boolean leap = false;
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    leap = true;
                } else {
                    leap = false;
                }

            } else {
                leap = true;
            }
        } else {
            leap = false;
        }
        if (leap) {
            System.out.println(year + " is a Leap year.");
        } else {
            System.out.println(year + " is a not Leap year.");
        }
        sc.close();
    }
}