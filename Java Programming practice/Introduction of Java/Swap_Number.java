/**
 * Swap_Number
 * Swap Number using temporary variable
 */
public class Swap_Number {

    public static void main(String[] args) {
        float first = 1.20f, second = 2.45f;
        System.out.println("__ Before Swap__");
        System.out.println(" First Number=" + first);
        System.out.println(" Second Number=" + second);
        float temprory = first;
        first = second;
        second = temprory;
        System.out.println("__ After Swap__");
        System.out.println(" First Number=" + first);
        System.out.println(" Second Number=" + second);

    }
}