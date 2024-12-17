#include <iostream>
using namespace std;
#include <stack>
int main(){
stack<int>s;
int input;

while(true){

    cin>>input;
      if(input==0){
         break;
    }
    s.push(input);



}


int x = s.top();
s.pop();
while(!s.empty()){

    if(s.top()>x){
        x = s.top();

    }
    else{
        s.pop();
    }
}
cout<<x;



}
