import java.util.*;
class AverageOfArray{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int arr[]=new int[5];
System.out.println("enter the 5 elements");

for(int i=1;i<5;i++)
{
arr[i]=sc.nextInt();


}
int sum=0;
for(int num:arr){
sum=sum+num;
}
 double average=(double) sum / arr.length;
System.out.println("average of the number is ="+average);
}



}