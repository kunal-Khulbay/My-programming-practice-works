

// /**
//  * Calculate_Execution_time
//  */
// class Calculate_Execution_time {

//     public void display() {
//         System.out.println("Calculating Method Execution Time:");
//     }

//     public static void main(String[] args) {
//         // Program to compute the mehord executin time.
//         Calculate_Execution_time obj = new Calculate_Execution_time();
//         Long start = System.nanoTime();
//         obj.display();
//         long end = System.nanoTime();
//         long execution = end - start;
//         System.out.println("Execution Time: " + execution + " nanoseconds");
//     }
// }
// }
/**
 * Calculate_Execution_time
 */
class Calculate_Execution_time {
    // Program to compute the execution time of the Recursive Method.

    public int factroial(int n) {
        if (n != 0) {
            return n * factroial(n - 1);
        } else {
            return 1;
        }
    }

    public static void main(String[] args) {
        Calculate_Execution_time obj = new Calculate_Execution_time();
        long start = System.nanoTime();
        System.out.println("Factorial is:" + obj.factroial(1));
        long end = System.nanoTime();
        long execution = (end - start);
        System.out.println("Execution Time of Recursive Method is:");
        System.out.println(execution + " nanoseconds");

    }
}
