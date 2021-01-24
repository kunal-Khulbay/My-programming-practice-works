

import java.util.ArrayList;
import java.util.Arrays;

// import java.util.ArrayList;

// /**
//  * Lambda_expressions_as_Method_parameters
//  */
// public class Lambda_expressions_as_Method_parameters {

//     public static void main(String[] args) {
//         // Create a ArrayList.
//         ArrayList<String> languages = new ArrayList<>();
//         // Add elemnt to the Arraylist.
//         languages.add("java");
//         languages.add("swift");
//         languages.add("python");
//         System.out.println("ArrayList: " + languages);
//         // Pass Lambda expressionas parameter to repalceAll() method.
//         languages.replaceAll(e -> e.toUpperCase());
//         System.out.println("Updated ArrayList: " + languages);
//     }
// }
/**
 * Lambda_expressions_as_Method_parameters
 */
public class Lambda_expressions_as_Method_parameters {

    // Pass multiline lambda body as function arguments.
    public static void main(String[] args) {
        ArrayList<String> languages = new ArrayList<>(Arrays.asList("java", "python"));
        System.out.println("ArrayList: " + languages);
        // Call the forEach() method.
        // Pass lambda as argument to forEach().
        // Reverse each element of ArrayList.
        System.out.print("Reversed ArrayList: ");
        languages.forEach((e) -> {
            // body of lambda experssion.
            String result = "";
            for (int i = e.length() - 1; i >= 0; i--) {
                result += e.charAt(i);
            }
            System.out.print(result + ",  ");
        });
        System.out.println();
    }
}