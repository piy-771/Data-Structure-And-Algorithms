#include <iostream>
using namespace std;
int maxx(int a,int b){
if(a>b){
    return a;
}
else{
    return b;
}
}
/*double maxx(double a,double b){
if(a>b){
    return a+1;
}
else{
    return b+1;
}
}*/
float maxx(float a,float b){
if(a>b){
    return a+2;
}
else{
    return b+2;
}
}
int main(){
cout<<maxx(4.5,5.3);
}
//To overcome this problem we use template
