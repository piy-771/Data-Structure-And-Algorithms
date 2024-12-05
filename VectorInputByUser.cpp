#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int>v;
int s,t;
cout<<"Enter how many records\n";
cin>>s;
cout<<"enter "<<s<<"record = \n";
for(int i =0;i<s;i++){
    cin>>t;
    v.push_back(t);
}
cout<<"\n";

for(auto p :v){
    cout<<p<<"\t";
}


}
