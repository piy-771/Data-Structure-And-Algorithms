#include <iostream>
using namespace std;
#define n 5
class stk{
public : int *arr;
int top;

stk(){
    arr = new int[n];    //dynamic memory allocation
    top = -1;
}

void push(int a){
if(top == n-1){
    cout<<"overflow\n";
    return;
}
top++;
arr[top] = a;
}

void pop(){
if(top == -1){
    cout<<"No element to pop\n";
    return;
}
top--;
}

int tops(){
if(top == -1){
    cout<<"No element\n";
    return -1;
}
return arr[top];
}
};

int main(){
stk st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
cout<<st.tops()<<"\n";
st.pop();
cout<<st.tops()<<"\n";
while(st.top != -1){
    cout<<st.tops()<<"\n";
    st.pop();
}

delete []st.arr;


}
