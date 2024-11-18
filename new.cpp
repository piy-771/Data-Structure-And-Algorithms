#include <iostream>
using namespace std;

void mer(int arr[],int low,int mid,int high){
    int temp[5],k=low;
    int p = low;
    int q = mid+1;
    while(p<=mid && q<=high){
        if(arr[p]<arr[q]){
            temp[k] = arr[p];
                p++;

        }else{
        temp[k] = arr[q];
        q++;
        }
        k++;
    }
    while(p<=mid){
        temp[k] = arr[p];
        p++;
        k++;
    }
    while(q<=high){
        temp[k] = arr[q];
        q++;
        k++;
    }

    for(int i = low;i<=high;i++){
        arr[i] =temp[i];
    }

}

void mergeSort(int arr[],int low,int high){
if(low>=high){
    return;
}

int mid = (low+high)/2;
mergeSort(arr,low,mid);
mergeSort(arr,mid+1,high);
mer(arr,low,mid,high);
}
int main(){
int arr[] = {2,3,1,5,6};
mergeSort(arr,0,4);
for(int i = 0;i<5;i++){
    cout<<arr[i]<<"\t";
}
}
