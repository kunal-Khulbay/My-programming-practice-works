import java.util.Scanner;

/**
 * Count_vowels_consonent_digit_space
 */
public class Count_vowels_consonent_digit_space {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Sentence");
        String line = sc.nextLine();
        int vowels = 0, consonants = 0, digits = 0, spaces = 0;
        line = line.toLowerCase();
        for (int i = 0; i < line.length(); i++) {
            char ch = line.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o') {
                vowels++;
            } else if (ch >= 'a' && ch <= 'z') {
                consonants++;
            } else if (ch >= '0' && ch <= '9') {
                digits++;
            } else if (ch == ' ') {
                spaces++;
            }
        }
        sc.close();
        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);
        System.out.println("Digits: " + digits);
        System.out.println("Spaces:" + spaces);
    }
}