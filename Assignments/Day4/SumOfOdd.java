import java.util.*;
class SumOfOdd{
public static void main(String args[]){

Scanner sc=new Scanner(System.in);
System.out.println("enter the number:");
int num=sc.nextInt();
int sum=0;
for(int i=1;i<=num;i++){
if(i%2!=0){
sum=sum+i;

}
}
System.out.println(num +"of sum"+sum);



}

}