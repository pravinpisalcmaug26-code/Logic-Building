import java.util.Arrays;

import java.util.*;
class SortArray{
public static void main(String args[])
{
Scanner sc =new Scanner(System.in);
int arr[]=new int[5];
System.out.println("enter the 5 elements:");

for(int i=0;i<5;i++){
arr[i]=sc.nextInt();
}
Arrays.sort(arr);
System.out.println("sorted array=");

for(int num:arr){




System.out.println(num+" ");
}
}


}