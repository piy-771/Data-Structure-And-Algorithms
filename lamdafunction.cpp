#include <iostream>
using namespace std;
int main(){
cout<<[](int a){if(a>0) return true;}(5)<<"\n";
cout<<[](int a,int b){if(a>b)return a;else return b;}(99,21);
}
