

import java.util.Scanner;

/**
 * Reverse_a_Sentence
 */
public class Reverse_a_Sentence {

    public static void main(String[] args) {
        // #### Reverse a Sentence using Recursion.####
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Sentence");
        String sentence = sc.nextLine();
        String reversed = reverse(sentence);
        System.out.println("The reversed sentence is: " + reversed);
        sc.close();
    }

    public static String reverse(String sentence) {
        if (sentence.isEmpty()) {
            return sentence;
        }
        return reverse(sentence.substring(1)) + sentence.charAt(0);
    }
}
