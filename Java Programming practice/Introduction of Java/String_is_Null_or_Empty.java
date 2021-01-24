/**
 * String_is_Null_or_Empty
 */
public class String_is_Null_or_Empty {

    public static void main(String[] args) {
        String str1 = null;
        String str2 = "";
        if (isNullorEmpty(str1)) {
            System.out.println("First String is null or empty");

        } else {
            System.out.println("First String is not null or empty");
        }
        if (isNullorEmpty(str2)) {
            System.out.println("Second String is null or empty");

        } else {
            System.out.println("Second String is not null or empty");
        }
    }

    public static boolean isNullorEmpty(String str) {
        if (str != null && !str.isEmpty()) {
            return false;
        }
        return true;
    }
}
