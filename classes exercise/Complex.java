import java.util.Scanner;

class Complex {
    int real;
    int imaginary;

    Complex(int real, int imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    void sum(Complex c) {
        System.out.println("Sum = " + (real + c.real) + " + " + (imaginary + c.imaginary) + "i");
    }

    void difference(Complex c) {
        System.out.println("Difference = " + (real - c.real) + " + " + (imaginary - c.imaginary) + "i");
    }

    void product(Complex c) {
        int r = (real * c.real) - (imaginary * c.imaginary);
        int i = (real * c.imaginary) + (imaginary * c.real);

        System.out.println("Product = " + r + " + " + i + "i");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter real part of first complex number: ");
        int r1 = sc.nextInt();

        System.out.print("Enter imaginary part of first complex number: ");
        int i1 = sc.nextInt();

        System.out.print("Enter real part of second complex number: ");
        int r2 = sc.nextInt();

        System.out.print("Enter imaginary part of second complex number: ");
        int i2 = sc.nextInt();

        Complex c1 = new Complex(r1, i1);
        Complex c2 = new Complex(r2, i2);

        c1.sum(c2);
        c1.difference(c2);
        c1.product(c2);
    }
}