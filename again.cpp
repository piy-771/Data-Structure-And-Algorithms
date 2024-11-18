#include <iostream>
using namespace std;
int main(){

int arr[] = {5,5,9,3,2};
for(int i = 0;i<5;i++){
    int mn = arr[i];
    int mnindex = i;
    for(int j = i+1;j<5;j++){
        if(mn>arr[j]){
            mn = arr[j];
            mnindex = j;
        }

    }
    //cout<<"mn="<<mn<<"\n";
    int temp = arr[i];
        arr[i] = arr[mnindex];
        arr[mnindex] = temp;

}
for(int i =  0;i<5;i++){
    cout<<arr[i];
}
}
