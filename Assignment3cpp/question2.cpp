#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Texture{
    
    string name;
    int width;
    int height;

    public:
    Texture(string name,int width,int height):name(name),width(width),height(height){
    }

     ~Texture(){
        
    }
    void display()const
   {
    cout<<name<<endl;
    cout<<width<<"x"<<height<<endl;
   }
   };
   
    class Shader{
    string name;
    string type;

  public:
    Shader(string name,string type):name(name),type(type){
cout<<"shared compiled"<<endl;
    }

    ~Shader(){
        cout<<"shared destroyed"<<endl;
    }

    int getReferenceCount(const shared_ptr<Shader>& s){
       return s.use_count();
    }
};
class AudioClip{
    string name;
    double duration;

    public:
    AudioClip(string s,double d):name(s),duration(d){

    }
    string getName()const
    {
        return name;
    }
};


int main()
{
    
    auto text1=make_unique<Texture>("player_sprite",512,512);
    text1->display();

    unique_ptr<Texture> tex2 =move(text1);
    cout<<"text is null:"<<(text1==nullptr? "yes":"no")<<endl;
    
    auto shader = make_shared<Shader>("main_vert", "vertex");

     cout << "Ref count: " << shader.use_count() << endl; 

    {

        auto rendererRef = shader;
        cout << "Ref count: " << shader.use_count() << endl; 

        auto editorRef = shader;
        cout << "Ref count: " << shader.use_count() << endl; 
    }

    cout << "Ref count: " << shader.use_count() << endl; 

shared_ptr<AudioClip>st=make_shared<AudioClip>("exxplosion",3.5);
weak_ptr<AudioClip>obs=st;



    

if(auto clip=obs.lock())
{
    cout<<"clip alive"<<clip->getName()<<endl;
}
st.reset();
if(obs.expired())
{
    cout<<"clip already uploaded"<<endl;
}

    return 0;
}          





    
     






  