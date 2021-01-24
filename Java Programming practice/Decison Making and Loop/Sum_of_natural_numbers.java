/**
 * Sum_of_natural_numbers
 */
public class Sum_of_natural_numbers {

    public static void main(String[] args) {
        // #### Find sum using for loops. ####
        // int num = 100, sum = 0;
        // for (int i = 0; i <= num; i++) {
        // sum += i;
        // }
        // System.out.println("Sum = " + sum);
        // **** Find sum using while loop.****
        int num = 50, i = 1, sum = 0;
        while (i <= num) {
            sum += i;
            i++;
        }
        System.out.println("Sum = " + sum);
    }
}