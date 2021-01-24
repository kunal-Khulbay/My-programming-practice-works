import java.util.Scanner;

/**
 * Remove_White_spacces_from_String
 */
public class Remove_White_spacces_from_String {

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        System.out.println("Enter the Sentence->");
        String sentence = reader.nextLine();
        System.out.println("Original Sntence:" + sentence);
        sentence = sentence.replaceAll("\\s", "");
        System.out.println("After Replacement:" + sentence);
        reader.close();
    }
}