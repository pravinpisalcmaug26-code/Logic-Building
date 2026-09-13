
//1. Odd numbers from 1 to 1000
class OddNumbers {
    public static void main(String[] args) {
        for (int item = 1; item <= 1000; item++) {
            if (item % 2 != 0) {
                System.out.println(item);
            }
        }
    }
}


//2. Even numbers from 1 to 500
class EvenNumbers {
    public static void main(String[] args) {
        for (int item = 1; item <= 500; item++) {
            if (item % 2 == 0) {
                System.out.println(item);
            }
        }
    }
}


//3. Every 7th number from 1 to 200
class SeventhNumber {
    public static void main(String[] args) {
        for (int item = 7; item <= 200; item = item + 7) {
            System.out.println(item);
        }
    }
}

/*4. Pattern
*
**
***
****
***** */
class Pattern1 {
    public static void main(String[] args) {
        for (int item = 1; item <= 5; item++) {
            for (int jtemp = 1; jtemp <= item; jtemp++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


/*5. Pattern
*****
****
***
**
*   */
class Pattern2 {
    public static void main(String[] args) {
        for (int item = 5; item >= 1; item--) {
            for (int jtemp = 1; jtemp <= item; jtemp++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


/*6. Pattern
1
2 3
4 5 6
7 8 9 10*/
class Pattern3 {
    public static void main(String[] args) {
        int number = 1;

        for (int item = 1; item <= 4; item++) {
            for (int jtemp = 1; jtemp <= item; jtemp++) {
                System.out.print(number + " ");
                number++;
            }
            System.out.println();
        }
    }
}


/*/7. Pattern
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6*/
class Pattern4 {
    public static void main(String[] args) {
        for (int item = 1; item <= 6; item++) {
            for (int jtemp = 1; jtemp <= item; jtemp++) {
                System.out.print(jtemp + " ");
            }
            System.out.println();
        }
    }
}

/*8. Pattern
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1*/
class Pattern5 {
    public static void main(String[] args) {
        for (int item = 6; item >= 1; item--) {
            for (int jtemp = 1; jtemp <= item; jtemp++) {
                System.out.print(jtemp + " ");
            }
            System.out.println();
        }
    }
}

