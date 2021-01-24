import java.util.Scanner;

public class Frequency_of_a_String {
    public static void main(String[] args) {
        String str;
        Scanner reader = new Scanner(System.in);
        System.out.println("Enter a String:");
        str = reader.nextLine();
        char a;
        int Frequency = 0;
        System.out.println("Enter a char:");
        a = reader.next().charAt(0);
        for (int i = 0; i < str.length(); i++) {
            if (a == str.charAt(i)) {
                ++Frequency;
            }
        }
        System.out.println("Frequency of " + a + " = " + Frequency);
        reader.close();
    }
}