#include <iostream>
using namespace std;
#include <vector>

void test(vector<int> vs){
for(auto p:vs){
    if(p%2 ==0){
        cout<<p<<"\t";
    }
}
}

int main(){
    vector<int>v {10,25,63,10,23};
    test(v);
}
