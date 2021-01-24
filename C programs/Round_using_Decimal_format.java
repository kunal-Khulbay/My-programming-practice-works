import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.Scanner;

/**
 * Round_using_Decimal_format
 */
public class Round_using_Decimal_format {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Entre a Decimal Number");
        double num1 = scan.nextDouble();
        DecimalFormat df = new DecimalFormat("#.###");
        df.setRoundingMode(RoundingMode.CEILING);
        System.out.println(df.format(num1));
        scan.close();
    }
}