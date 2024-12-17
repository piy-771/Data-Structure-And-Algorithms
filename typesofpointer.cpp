#include <iostream>
using namespace std;
int main(){
int *p;    //if we don't give address to pointer is called wild pointer

int *p1 = NULL;  //Null pointer
int k = 30;
p1 = &k;
cout<<p1;


}
