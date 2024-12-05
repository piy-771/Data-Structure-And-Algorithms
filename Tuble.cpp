#include <iostream>
using namespace std;
#include <tuple>
int main(){
tuple<int,string,int>t{101,"Amit",21};
cout<<"Rollno = "<<get<0>(t)<<"\n";
cout<<"Name = "<<get<1>(t) <<"\n";
cout<<"Age = "<<get<2>(t)<<"\n";
}
