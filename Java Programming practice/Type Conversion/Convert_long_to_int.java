/**
 * Convert_long_to_int
 */
public class Convert_long_to_int {

    public static void main(String[] args) {
        // #### Convert long to int using Typecasting
        // long a = 2322331L;
        // long b = 52341241L;
        // int c = (int) a;
        // int d = (int) b;
        // System.out.println(c);
        // System.out.println(d);
        // $$$$ Convert log to int using toIntExact() Funtion.
        // long a=52336L;
        // long b=-445636L;
        // int c=Math.toIntExact(a);
        // int d=Math.toIntExact(b);
        // System.out.println(c);
        // System.out.println(d);
        //**** Convert object of Long class to int. ****
        Long obj=52341241L;
        int a= obj.intValue();
        System.out.println(a);
    }
}