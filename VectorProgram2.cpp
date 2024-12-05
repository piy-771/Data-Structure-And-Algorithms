#include <iostream>
using namespace std;
#include <vector>

vector<int> test (vector<int> vs){


for(int i = 0;i<vs.size();i++){
    vs[i] = vs.at(i)+1;
}
return vs;


}

int main(){
vector<int> v{10,20,30,40,50};
v = test(v);
for(auto p:v){
    cout<<p<<"\t";
}
}
