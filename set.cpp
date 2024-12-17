#include <iostream>
#include<set>
using namespace std;
int main(){
set<string>s;
s.insert("amit");
s.insert("sunny");
s.insert("bunny");
s.insert("jiya");
for(auto p : s){
    cout<<p<<"\n";
}

s.erase("bunny");
cout<<"After erase\n";
for(auto p : s){
    cout<<p<<"\n";
}


cout<<"Find Sunny\n";
auto k =s.find("sunny");
if(k != s.end()){
    cout<<*k;
}else{
cout<<"not found\n";
}
}
