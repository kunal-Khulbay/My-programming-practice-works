import java.util.Scanner;

/**
 * Remove_White_Space_From_String
 */
public class Remove_White_Space_From_String_2 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the String");
        String input = scan.nextLine();
        System.out.println("Original String: " + input);
        input = input.replaceAll("\\s", "");
        System.out.println("Final String: " + input);
        scan.close();
    }
}
