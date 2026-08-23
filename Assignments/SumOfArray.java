import java.util.*;
class SumOfArray{
public static void main(String arg[]){
Scanner sc=new Scanner(System.in);
int arr[]=new int[5];
 System.out.println("enter the 5 elements:");

for(int i=0;i<5;i++){
arr[i]=sc.nextInt();


}
int sum=0;

for(int num:arr){
sum=sum+num;


}
System.out.println("the sum of all number is="+sum);
}

}