#include <iostream>
using namespace std;

int selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex= i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }  
        swap(arr[i],arr[minIndex]);
    }
}

int main(){
int arr[5] = {7,1,4,3,9};
cout<<"Before sorting ";
for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
}

cout<<"\nAfter Sorting ";
selectionSort(arr,5);
for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}