#include <iostream>
using namespace std;
void printarr(int ar[],int sz){
  for(int i = 0;i<sz;i++){
    cout<<ar[i]<<"\n";
}

}

int srt(int arr[],int lowIndex,int highIndex){
int pvt = arr[lowIndex];
int p = lowIndex+1;
int q = highIndex;
int temp;
do{
    while(arr[p]<pvt){
        p++;
    }
    while(arr[q]>pvt){
        q--;
    }
    if(p<q){
        temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
    }
}while(p<q);
temp = arr[lowIndex];
arr[lowIndex] = arr[q];
arr[q] = temp;
return q;
}

void qs(int arr[],int lowIndex,int highIndex){
if(lowIndex<highIndex){
    int pvt;
    pvt = srt(arr,lowIndex,highIndex);
    qs(arr,0,pvt-1);
    qs(arr,pvt+1,highIndex);
}
}

int main(){
int arr[] = {4,1,3,9,7};
printarr(arr,5);
qs(arr,0,4);
cout<<"Array after quick sort\n";
printarr(arr,5);
}

//time complexity - O(nLog(n))  in best and average case
//in worst case it time complexity become O(n^2)

//structure based or value based - both

