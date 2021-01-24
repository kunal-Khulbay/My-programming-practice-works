/**
 * Sort_elements_in_Lexocographical_order(Dictionary Order)
 */
public class Sort_elements_in_Lexocographical_order {

    public static void main(String[] args) {
        // Program to Sort Strings in Dictionary Order.
        String[] words = { "Ruby", "C", "Python", "Java" };
        String temp;
        for (int i = 0; i < 3; ++i) {
            for (int j = i + 1; j < 4; ++j) {
                if (words[i].compareTo(words[j]) < 0) {
                    temp = words[i];
                    words[i] = words[j];
                    words[j] = temp;
                }
            }
        }
        System.out.println("In Lexographical order:");
        for (int i = 0; i < 4; i++) {
            System.out.println(words[i]);
        }
    }
}