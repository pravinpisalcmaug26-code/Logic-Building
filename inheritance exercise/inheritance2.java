import java.util.*;

class Member{

String name;

int age;

String phonenumber;

String address;

double salary;

String getName() {

return name;

}

int getAge() {

return age;

}

String getPhonenumber() {

return phonenumber;

}

String getAddress() {

return address;

}

double getSalary() {

return salary;

}

void setName(String name) {

this.name=name;

}

void setAge(int age) {

this.age=age;

}

void setPhonenumber(String phonenumber) {

this.phonenumber=phonenumber;

}

void setAddress(String address) {

this.address=address;

}

void setSalary(double salary) {

this.salary=salary;

}

void printsalary()

{

System.out.println("salary="+salary);

}

}

class Primemember extends Member

{

int joiningyear;

int joiningfees;

boolean isActive;

int getJoiningyear()

{

return joiningyear;

}

int getJoiningfees()

{

return joiningfees;

}

boolean getIsActive() {

return isActive;

}

void setIsActive(boolean isActive) {

this.isActive=isActive;

}

void setJoiningfees(int joiningfees) {

this.joiningfees=joiningfees;

}

void setJoiningyear(int joiningyear ) {

this.joiningyear=joiningyear;

}

void display() {

System.out.println("name="+getName());

System.out.println("age="+getAge());

System.out.println("phonenumber="+getPhonenumber());

System.out.println("address="+getAddress());

    System.out.println("salary="+getSalary());

System.out.println("joiningyear="+getJoiningyear());

System.out.println("joiningfees="+getJoiningfees());

System.out.println("isActive="+getIsActive());

}

}

public class inheritance2 {

public static void main(String[] args) {

Scanner sc=new Scanner(System.in);

Primemember member=new Primemember();

System.out.println("enter the name");

member.setName(sc.nextLine());

System.out.println("enter the age");

member.setAge(sc.nextInt());

System.out.println("enter the phonenumber");

member.setPhonenumber(sc.nextLine());

System.out.println("enter the address");

member.setAddress(sc.nextLine());

System.out.println("enter the salary");

member.setSalary(sc.nextDouble());

System.out.println("enter the joiningyear");

member.setJoiningyear(sc.nextInt());

System.out.println("enter the joiningfees");

member.setJoiningfees(sc.nextInt());

System.out.println("enter the isActive(true/false):");

member.setIsActive(sc.nextBoolean());

System.out.println("member details");

member.display();

System.out.println();

member.printsalary();

sc.close();

}


}
