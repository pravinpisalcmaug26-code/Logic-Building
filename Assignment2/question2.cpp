#include <iostream>
#include<string>
using namespace std;

class patient{
int patientId;
string name;
int age;
string ward;
const string bloodgroup;

public:
patient():patientId(0),name(""),age(0),ward(""),bloodgroup("")
{
    cout<<"[constructor]"<<"default patient registered."<<endl;
}
patient(int p, const string& name ):patientId(p),name("n"),age(0),ward("emergency"),bloodgroup("+o")
{
  cout<<"[constructor]"<<"Emergency : "<<name<<endl; 
}
patient(int p, const string& name,int a,const string& ward,const string&bloodgroup ):patientId(p),name(name),age(a),ward(ward),bloodgroup(bloodgroup)
{
    cout<<"[constructor]"<<"full admission : "<<name<<endl;
}
~patient(){
    cout<<"[destructor]patient"<<name<<"discharge."<<endl;
    cout<<"[destructor]patient"<<name<<"discharge."<<endl;

}

void displayRecord()const{
    cout<<"patient records:"<<endl;
    cout<<"Id        :"<<patientId<<endl;
    cout<<"name      :"<<name<<endl;
    cout<<"age       :"<<age<<endl;
    cout<<"ward      :"<<ward<<endl;
    cout<<"bloodgroup:"<<bloodgroup<<endl;

}
void transferWard(const string&newWard){
    cout<<"wardTransfer"<<name<<"->"<<newWard<<endl;
    ward=newWard;
}




};

int main()
{
    patient s1(1001,"meera joshi",34,"Cardilogy","B+");
    patient s2(56,"raj patel");
    patient s3;

    patient* arr=new patient[4];
     s1.displayRecord();
    
    s2.transferWard("ICU");
    

     delete[] arr;
    


}


