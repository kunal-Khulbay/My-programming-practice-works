// import java.math.BigInteger;

/**
 * Factroial
 */
public class Factorial {

    public static void main(String[] args) {
        // #### Factorial using for loops.####
        // int num = 10;
        // long Factorial = 1;
        // for (int i = 1; i < num; i++) {
        // Factorial *= i;
        // }
        // System.out.printf("Factorial of %d=%d\n", num, Factorial);
        // **** Factorial using BigInteger. ****
        // int num = 30;
        // BigInteger factorial = BigInteger.ONE;
        // for (int i = 1; i <= num; ++i) {
        // factorial = factorial.multiply(BigInteger.valueOf(i));
        // }
        // System.out.printf("Factorial of %d=%d\n", num, factorial);
        // $$$$ Factorial using while loops. $$$$
        int num = 5, i = 1;
        long Factorial = 1;
        while (i <= num) {
            Factorial *= i;
            i++;
        }
        System.out.printf("Factorial of %d=%d\n", num, Factorial);
    }
}