#include <iostream>
using namespace std;
#include <stack>
#include <string>
bool valid(string &s,int len){
    bool r = true;
stack<char> store;
for(int i =0;i<len;i++){
    if(s[i] == '{' || s[i] == '[' || s[i] == '('){
        store.push(s[i]);
       }else if(s[i] == '}'){
        if(!store.empty() && store.top() == '{'){
            store.pop();
        }else{
        return false;
        }
       }else if(s[i] == ')'){
        if(!store.empty() && store.top() == '('){
            store.pop();
        }else{
        return false;
        }
       }else if(s[i] == ']'){
        if(!store.empty() && store.top() == '['){
            store.pop();
        }else{
        return false;
        }
       }
}
if(!store.empty()){
    return false;
}else{
        return true;
        }
}
int main(){
  string s;
  cout<<"Enter a parenthesis string\n";
  cin>>s;
  bool check = valid(s,s.length());
  if(check){
    cout<<"Valid\n";
  } else{
  cout<<"Invalid";
  }
}
