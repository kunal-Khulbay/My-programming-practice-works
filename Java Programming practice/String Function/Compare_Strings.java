public class Compare_Strings {

    public static void main(String[] args) {
        // Compare two Strings.
        // String style = "Bold";
        // String style2 = "Bold";
        // if (style == style2) {
        // System.out.println("Equal");
        // } else {
        // System.out.println("Not Equal");
        // }

        // Compare two strings using equals().
        // String style = new String("Bold");
        // String style2 = new String("Bold");
        // if (style.equals(style2)) {
        // System.out.println("Equal");
        // } else {
        // System.out.println("Not Equal");
        // }

        // Reverse of the first case.
        // String style = new String("Bold");
        // String style2 = new String("Bold");
        // if (style == style2) {
        // System.out.println("Equal");
        // } else {
        // System.out.println("Not Equal");
        // }
        String style = new String("Bold");
        String style2 = new String("Bold");
        boolean result = style.equals("Bold");
        System.out.println(result);
        result = style2 == "Bold";
        System.out.println(result);
        result = style == style2;
        System.out.println(result);
        result = "Bold" == "Bold";
        System.out.println(result);
    }
}
