import java.util.*;
class Sum{
static int sumOfTwoNumbers(int num1,int num2){

int c=num1+num2;
return c;
}
public static void main(String args[]){

Scanner sc=new Scanner(System.in);
System.out.println("enter the number1");
int number1 = sc.nextInt();
System.out.println("enter the number2");
int number2 = sc.nextInt();

int result = sumOfTwoNumbers(number1 ,number2);
System.out.println("the sum of "+number1+"and"+number2 +"is"+result);



}
}