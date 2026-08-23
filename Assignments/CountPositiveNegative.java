import java.util.*;
class CountPositiveNegative{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int arr[]=new int[6];
System.out.println("enter the 6 elements");

for(int i=0;i<6;i++){
arr[i]=sc.nextInt();

}
int positive=0;
int negative=0;
for(int num:arr){
if(num>0){
positive++;
}
else if(num<0){
negative++;
}
}
System.out.println("positive numbers are:="+positive);
System.out.println("negative numbers are:"+negative);
}



}