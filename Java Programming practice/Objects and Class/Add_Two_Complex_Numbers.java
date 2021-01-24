/**
 * Add_Two_Complex_Numbers
 */
public class Add_Two_Complex_Numbers {

    // Add two Complex Numbers By passing to a Function.
    double real, imag;

    public Add_Two_Complex_Numbers(double real, double imag) {
        this.real = real;
        this.imag = imag;
    }

    public static void main(String[] args) {
        Add_Two_Complex_Numbers n1 = new Add_Two_Complex_Numbers(2.3, 4.5), n2 = new Add_Two_Complex_Numbers(3.4, 5.0),
                temp;
        temp = add(n1, n2);
        System.out.printf("Sum = %.1f+%.1fi\n", temp.real, temp.imag);

    }

    public static Add_Two_Complex_Numbers add(Add_Two_Complex_Numbers n1, Add_Two_Complex_Numbers n2) {
        Add_Two_Complex_Numbers temp = new Add_Two_Complex_Numbers(0.0, 0.0);
        temp.real = n1.real + n2.real;
        temp.imag = n1.imag + n2.imag;
        return (temp);
    }
}