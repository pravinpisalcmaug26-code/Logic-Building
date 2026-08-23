import java.util.*;
class PrintNames{
public static void main(String args[]){
Scanner sc= new Scanner(System.in);
String[] names=new String[4];
System.out.println("enter the 4 names:");


for(int i=0;i<4;i++){
names[i]=sc.nextLine();


}
for(String name : names){
System.out.println(name);

}
}


}