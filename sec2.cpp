#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int a[n];
    cout<<"Enter value \n";
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\n Sorted Array \n";
    int c;
    for(int i = 0;i<n;i++){
    c = 0;
    for(int j = 0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            c++;

        }
    }
    if(c==0){
        break;
    }
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<"\t";
    }



}
