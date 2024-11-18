#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of an Array\n";
cin>>n;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

int hash[13] = {0};
for(int i = 0;i<n;i++){
    hash[arr[i]] +=1;
}

int q;
cout<<"Number of query u want to run\n";
cin>>q;
while(q--){
    int number;
    cin>>number;
    cout<<hash[number]<<"\n";
}
}
