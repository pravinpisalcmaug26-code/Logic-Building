#include<iostream>
using namespace std;

int main()
{
    int statuscode;
    double temp;
    cout<<"enter the temperature"<<endl;
    cin>>temp;


        if(temp<0)
    {
        statuscode=-1;

    }
        else if(temp<=29)
    {
        statuscode=0;

    }
       
     else if(temp<=44)
    {
        statuscode=1;

    }
     else if(temp<=59)
    {
        statuscode=2;

    }
    else {
        statuscode=3;
    }
    double fahrenheit=(temp*9/5)+32;
    cout<<"temperature"<<temp<<endl;
      cout<<"temperature:"<<temp<<"C/"<<fahrenheit<<"f"<<endl;

    switch(statuscode)
    {
        case -1 :
        cout<<"status:sensor_error"<<endl;
        cout<<"action:sensor_fault-check wiring"<<endl;
        break;

        case 0 :
        cout<<"status:normal"<<endl;
        cout<<"action:no action required"<<endl;
         break;

        case 1 :
        cout<<"status:warning"<<endl;
        cout<<"action:alert sent to supervisor"<<endl;
          break;

        case 2 :
        cout<<"status:critical"<<endl;
        cout<<"action:cooling system triggered"<<endl;
          break;

        case 3 :
        cout<<"status:shutdown"<<endl;
        cout<<"action:emergency shutdown initiated"<<endl;
         break;

       
    }
string reading =(temp>=25) ? "above average" : "below average";
cout<<"reading:"<<reading<<endl;
}