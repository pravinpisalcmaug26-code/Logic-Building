import java.util.Scanner;

public class PositiveNumber {

    public static void askForPositiveNumber() {
        Scanner sc = new Scanner(System.in);
        int num;

        do {
            System.out.print("Enter a positive number: ");
            num = sc.nextInt();
        } while (num <= 0);

        System.out.println("You entered a positive number: " + num);

        sc.close();
    }

    public static void main(String[] args) {
        askForPositiveNumber();
    }
}