import java.util.Scanner;

/**
 * Vowel_Consonent
 */
public class Vowel_Consonent {

    public static void main(String[] args) {
        char ch;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the Character");
        ch=scan.next().charAt(0);
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            System.out.println(ch +" is Vowel");
            break;
            default:
            System.out.println(ch+ " is Consonent");
        }
        scan.close();
    }
}