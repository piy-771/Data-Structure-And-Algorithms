#include <iostream>>
using namespace std;
#include <vector>
#include <iterator>
int main(){
vector<int> v{12,5,3,4,6};
vector<int>v2{14,56,21,47,89,25,14,2};
v.pop_back();
for(auto j : v){
    cout<<j<<"\t";
}
cout<<"\n";
vector<int>::iterator it=v.begin();
cout<<*it;
cout<<"\t";
cout<<v[0];
cout<<"\t";
cout<<*(it+2);
v.insert(it,100);
cout<<"\n";
for(auto j : v){
    cout<<j<<"\t";
}
v.erase(it+2);
cout<<"\n";
for(auto j : v){
    cout<<j<<"\t";
}
cout<<"\n";
v.swap(v2);
cout<<"Vector 1 =\n";
cout<<"\n";
for(auto j : v){
    cout<<j<<"\t";
}

cout<<"Vector 2 =\n";
cout<<"\n";
for(auto j : v2){
    cout<<j<<"\t";
}

}
