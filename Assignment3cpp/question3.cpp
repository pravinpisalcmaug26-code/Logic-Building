#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

class LogBuffer{
    char* buffer;
    int capacity;
    int size;
    static int instanceCount;

    public:
LogBuffer(int capacity):capacity(capacity){

 buffer=new char[capacity];
 size=0;
 instanceCount++;
 
 cout<<"[LogBuffer created] capacity="<<capacity<<endl;
}
LogBuffer(const LogBuffer& log1)
{
    capacity=log1.capacity;
    size=log1.size;
    

    buffer=new char[capacity];
    memcpy(buffer,log1.buffer,size);
}
LogBuffer& operator=(LogBuffer& log1){
if(this!=&log1)
{
    delete[] buffer;

    size=log1.size;
    
    capacity=log1.capacity;

    buffer =new char[capacity];
   memcpy(buffer,log1.buffer,size);
}
return *this;



}

~LogBuffer(){
    delete[ ] buffer;
    instanceCount--;
    cout<<"LogBuffer destroy"<<endl;

}

void append(const char*msg){
    int msgLength = strlen(msg);

        
        int available = capacity - size;

        int copyLength = msgLength;

        if (copyLength > available) {
            copyLength = available;
        }

        memcpy(buffer + size, msg, copyLength);

        size += copyLength;

        buffer[size] = '\0';

}
void print()const{

 cout << buffer << endl;
}
void clear()
{
     size = 0;
        buffer[0] = '\0';
    

}

 static int getInstanceCount(){

return instanceCount;
}
};
int LogBuffer::instanceCount=0;

int main()
    {
LogBuffer log1(256);
log1.append("server started on port 8080");
log1.append("I request received from 192.168.1.10");
log1.print();

LogBuffer log2=log1;
log2.append("I cached response sent ");
cout<<"log1:";log1.print();
cout<<"log2:";log2.print();

LogBuffer log3(128);
log3=log1;
log3.print();

cout<<"live logbuffer objects:"<<LogBuffer::getInstanceCount()<< endl;
return 0;

    }


