#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);
cout<<"Size = "<<v.size();
cout<<"\nCapacity = "<<v.capacity()<<"\n";
for(auto p :v){
    cout<<p<<"\t";
}
}

