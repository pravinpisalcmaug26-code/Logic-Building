import java.util.*;
class PrintArray{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("enter the 5 integer");
int arr[]=new int[5];

for(int i=0;i<5;i++)
{
 arr[i]=sc.nextInt();

}
System.out.println("array elemrnts are:");
for(int num:arr){
System.out.println(num);
}
}

}