 class Student1{
    String name;
    int rollno;
    String phone_no;
    String address;

void display(){
    System.out.println(name);
     System.out.println(rollno);
       System.out.println(phone_no);
         System.out.println(address);
}
}



public class Student{
    public static void main(String args[]){
      Student1   s=new Student1();
      s.name="pravin";
      s.rollno=67;
      s.phone_no="678909876543";
      s.address="s.h.k.j";
      s.display();
    }
}