/**
 * Convert_double_to_int
 */
public class Convert_double_to_int {

    public static void main(String[] args) {
        // #### Convert double to int using Typecasting ####
        // double a = 23.78D;
        // double b = 52.11D;
        // int c = (int) a;
        // int d = (int) b;
        // System.out.println(c);
        // System.out.println(d);
        // $$$$ Convert double to int using Math.round().$$$$
        // double a = 99.99D;
        // double b = 52.11D;
        // int c = (int) Math.round(a);
        // int d = (int) Math.round(b);
        // System.out.println(c);
        // System.out.println(d);
        // **** Convert double to int using int intValue() method ****
        Double obj = 78.6;
        int num = obj.intValue();
        System.out.println(num);
    }
}