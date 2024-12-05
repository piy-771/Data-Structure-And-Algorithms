#include <iostream>
using namespace std;
#include <stack>
int main(){
stack<int>s;
s.push(22);
s.push(21);
s.push(58);
s.push(12);
while(!s.empty()){
    cout<<s.top()<<"\n";
    s.pop();
}
if(s.empty()){
    cout<<"Stack s is empty\n";
}else{
    cout<<"Stack is not empty";
}
}
