enum Size {
    // enum Constants.
    SMALL, MEDIUM, LARGE, EXTRALARGE;

    public String getSize() {
        switch (this) {
            case SMALL:
                return "small";
            case MEDIUM:
                return "medium";
            case LARGE:
                return "large";
            case EXTRALARGE:
                return "extra large";

            default:
                return null;
        }
    }

    public static void main(String[] args) {
        // call the method getSize()
        // Using the objext Small
        System.out.println("This size of Pizza I get is " + Size.SMALL.getSize());
        // call the method getSize()
        // using the object LARGE
        System.out.println("The size of Pizza I want is " + Size.LARGE.getSize());
    }
}
