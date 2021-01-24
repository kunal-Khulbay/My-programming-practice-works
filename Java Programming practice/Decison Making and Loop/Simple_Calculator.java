import java.util.Scanner;

/**
 * Simple_Calculator
 */
public class Simple_Calculator {

    public static void main(String[] args) {
        // #### Simple Calculator using switch case.####
        Scanner reader = new Scanner(System.in);
        System.out.println("Enter the First Number");
        double num1 = reader.nextDouble();
        System.out.println("Enter the Operator (+,-,*,/)");
        char operator = reader.next().charAt(0);
        System.out.println("Enter the Second Number");
        double num2 = reader.nextDouble();
        double result = 0;
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;

            default:
                System.out.println("Error! operator is not correct");
        }
        System.out.printf("%.1f %c %.1f =%.1f\n", num1, operator, num2, result);
        reader.close();
    }
}