public class StringLiteralExample {
    public static void main(String[] args) {

        String str1 = "java";
        String str2 = "java";
        String str3 = "java";

        boolean allEqual = (str1 == str2) && (str2 == str3);

        System.out.println("All strings point to the same object: " + allEqual);
    }
}