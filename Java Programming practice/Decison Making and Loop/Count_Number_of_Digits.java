/**
 * Count_Number_of_Digits
 */
public class Count_Number_of_Digits {

    public static void main(String[] args) {
        // #### Count Number of Digits in an Integer using While loop. ####
        // int count = 0, num = 3454;
        // while (num != 0) {
        // num /= 10;
        // ++count;
        // }
        // System.out.println("Number of Digits :" + count);
        // #### Count Number of Digits in an Integer using For loop. ####
        int count = 0, num = 123456;
        for (; num != 0; num /= 10, count++) {
        }
        System.out.println("Number of Digits :" + count);
    }
}