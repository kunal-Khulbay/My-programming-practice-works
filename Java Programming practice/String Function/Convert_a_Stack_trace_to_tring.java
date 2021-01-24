import java.io.PrintWriter;
import java.io.StringWriter;

/**
 * Convert_a_Stack_trace_to_tring
 */
public class Convert_a_Stack_trace_to_tring {

    public static void main(String[] args) {
        try {
            int division = 0 / 0;
            System.out.println(division);
        } catch (ArithmeticException e) {
            StringWriter sw = new StringWriter();
            e.printStackTrace(new PrintWriter(sw));
            String exceptionAString = sw.toString();
            System.out.println(exceptionAString);
        }
    }
}