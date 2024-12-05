#include <iostream>
using namespace std;
#include <forward_list>
int main(){
forward_list<int>L1{9,4,2,1,5,3};
forward_list<int>L2{45,56,6,89,14,2,0};
cout<<"Data of list\n";
for(auto p:L1){
    cout<<p<<"\t";
}
cout<<"\ndata of 12\n";
for(auto p : L2){
    cout<<p<<"\t";
}

L1.sort();
L2.sort();
L1.merge(L2);
cout<<"\nAfter merging L1 and L2 data will be \n";
for(auto p : L1){
    cout<<p<<"\t";
}
}
