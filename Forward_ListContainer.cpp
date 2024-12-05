#include <iostream>
using namespace std;
#include<forward_list>
int main(){
    forward_list<int>list1{10,3,24,5,6,10,24,5,6};
    for(auto p :list1){
        cout<<p<<"\t";
    }
    list1.push_front(200);
    list1.push_front(300);
    list1.pop_front();
    cout<<"\n";
    for(auto p :list1){
        cout<<p<<"\t";
    }
    cout<<"\n";
    list1.sort();
    for(auto p :list1){
        cout<<p<<"\t";
    }

    //unique forward list
    list1.unique();
    cout<<"\n";
    for(auto p :list1){
        cout<<p<<"\t";
    }

}
