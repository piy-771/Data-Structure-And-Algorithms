#include <iostream>
using namespace std;

//generalized class  or template class is also known as generalized class
template<typename c1,typename c2>
class Student{
    c1 age;
    c2 salary;

    public:Student(c1 a,c2 s){
    age = a;
    salary = s;
    }

    void show(){
    cout<<"Age = "<<age<<"\n";
    cout<<"Salary = "<<salary<<"\n";
    }
};

int main(){
    Student<int,double>obj(21,45000.25);
    obj.show();
}
