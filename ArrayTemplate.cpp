#include <iostream>
using namespace std;
#include <array>
int main(){
array<int,5>arr{1,2,3,4,5};
//cout<<arr.size()<<"\n";

//by taking input from user

//array<int,5>arr;
cout<<"Enter 5 values\n";
/*for(int i = 0;i<arr.size();i++)
{
    cin>>arr.at(i);
}*/

cout<<"First Array\n";
for(int i = 0;i<arr.size();i++){
    cout<<arr.at(i)<<"\t";
}
cout<<"\n";

//first element
//cout<<"Value at 0 index = "<<arr.front()<<"\n";

//last element
//cout<<"Value of "<<arr.size()-1<<" index = "<<arr.back();


//swap function
cout<<"Second Array\n";
array<int,5>arr1{10,20,30,40,50};
for(int i = 0;i<arr1.size();i++){
    cout<<arr1.at(i)<<"\t";
}
cout<<"\n";

arr.swap(arr1);
cout<<"Array 1 after swap\n";
for(int i = 0;i<arr1.size();i++){
    cout<<arr.at(i)<<"\t";
}
cout<<"\n";

cout<<"Array 2 after swap\n";
for(int i = 0;i<arr1.size();i++){
    cout<<arr1.at(i)<<"\t";
}
cout<<"\n";

//fill function
arr1.fill(256);
cout<<"Array 2 after fill with 256\n";
for(int i = 0;i<arr1.size();i++){
    cout<<arr1.at(i)<<"\t";
}
}
