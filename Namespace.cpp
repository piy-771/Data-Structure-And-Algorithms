#include <iostream> //content placeholder
using namespace std;
//namespace is a collection of identifier ,It removes the ambuguity.By default its accessifier is public
namespace cybrom{

    //variable
    int age = 21;

    //functioin
    void show(){
    cout<<"\n Example of namespace\n";
    }

    //class
    class Student{
    public:void hello(){
    cout<<"\nThis is Student class hello() function\n";
    }
    }p;
}
int main(){
    cout<<cybrom::age<<"\n";
    cybrom::show();

    //1st waay
    cybrom::Student s;
    s.hello();

    //2nd way
    using namespace cybrom;
    p.hello();

}
