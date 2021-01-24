// import java.util.ArrayList;
// import java.util.Arrays;

// /**
// * Create_custom_exception
// */
// // Craete a checked exception class
// class CustomException extends Exception {
// public CustomException(String message) {
// // call the constructor of Exception class.
// super(message);
// }
// }

// public class Create_custom_exception {

// ArrayList<String> languages = new ArrayList<>(Arrays.asList("Java", "Python",
// "JavaScript"));

// // Check the exception conditon
// public void checkLanguage(String language) throws CustomException {
// // Throw exception if language already present in Arraylist
// if (languages.contains(language)) {
// throw new CustomException(language + " already exists");
// } else {
// // Insert language to ArrayList.
// languages.add(language);
// System.out.println(language + " is added to the ArrayList");
// }
// }

// public static void main(String[] args) {
// // create object of Create_custom_exception class.
// Create_custom_exception obj = new Create_custom_exception();
// // Exceprion is handled using try-Catch.
// try {
// obj.checkLanguage("Swift");
// obj.checkLanguage("Java");
// } catch (CustomException e) {
// System.out.println("[" + e + "] Exception Occured");
// }
// }
// }
// import java.util.ArrayList;
// import java.util.Arrays;

/**
 * Create_custom_exception
 */
// Craete a checked exception class
// class CustomException extends RuntimeException {
// public CustomException(String message) {
// // call the constructor of RuntimeException .
// super(message);
// }
// }

// public class Create_custom_exception {

// ArrayList<String> languages = new ArrayList<>(Arrays.asList("Java", "Python",
// "JavaScript"));

// // Check the exception conditon
// public void checkLanguage(String language) {
// // Throw exception if language already present in Arraylist
// if (languages.contains(language)) {
// throw new CustomException(language + " already exists");
// } else {
// // Insert language to ArrayList.
// languages.add(language);
// System.out.println(language + " is added to the ArrayList");
// }
// }

// public static void main(String[] args) {
// // create object of Create_custom_exception class.
// Create_custom_exception obj = new Create_custom_exception();
// // Check if language already exists.
// obj.checkLanguage("Swift");
// obj.checkLanguage("Java");
// }
// }