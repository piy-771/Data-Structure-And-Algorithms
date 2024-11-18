
#include <iostream>
using namespace std;
    //Template:
    //It is a generalized format of function and class
    //There are two type of templates.
    //1.Function template
    //2.Class template

    //example of class template
    template<typename a,typename b>
    b grt(a a1,b b1){
    if(a1>b1){
        return a1;
    }else {
    return b1;
    }
    }
    int main(){
     cout<<grt(5.5,4);
    }
