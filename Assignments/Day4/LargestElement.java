import java.util.Arrays;
import java.util.*;
class LargestElement{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int arr[]=new int[5];
System.out.println("enter the 5 elements");
 
for(int i=0;i<5;i++)
{

arr[i]=sc.nextInt();


}
Arrays.sort(arr);
int largest=arr[arr.length-1];
System.out.println("the largest element is="+largest);
}



}