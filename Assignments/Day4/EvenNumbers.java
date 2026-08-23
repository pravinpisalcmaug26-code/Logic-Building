import java.util.*;
class EvenNumbers{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("enter the number");
int num=sc.nextInt();

int ans=1;
for(int i=1;i<=num;i++){
if(i%2==0)
{
System.out.println(i);

}
}

}
}