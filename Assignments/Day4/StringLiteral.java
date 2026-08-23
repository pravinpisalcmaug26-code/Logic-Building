public class StringLiteral {
    public static void main(String[] args) {

        String str1 = "Hello";
        String str2 = "Hello";

        if (str1 == str2) {
            System.out.println("Both variables point to the same object.");
        } else {
            System.out.println("Both variables point to different objects.");
        }
    }
}