import java.util.Scanner;

/**
 * Check_Character_is_Alphabet_or_not
 */
public class Check_Character_is_Alphabet_or_not {

    public static void main(String[] args) {
        // #### Check alphabet using if else. ####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Alphabet.");
        // char c = sc.next().charAt(0);
        // if (c >= 'a' && c <= 'z' || c >= 'A' && c == 'Z') {
        // System.out.println(c + " is an Alphabet.");
        // } else {
        // System.out.println(c + " is not an Alphabet.");
        // }
        // sc.close();
        // $$$$ Check Alphabet using ternary Operator.$$$$
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Alphabet.");
        // char c = sc.next().charAt(0);
        // String output=(c>='a'&&c<='z')||(c>='A'&& c<='Z')
        // ?c+" is an Alphabet."
        // :c+" is not an Alphabet.";
        // System.out.println(output);
        // sc.close();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Alphabet.");
        char c = sc.next().charAt(0);
        if (Character.isAlphabetic(c)) {
            System.out.println(c + " is an Alphabet.");
        } else {
            System.out.println(c + " is not an Alphabet.");
        }
        sc.close();
    }
}