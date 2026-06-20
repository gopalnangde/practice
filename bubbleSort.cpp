#include <iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    for(int i=0 ; i<size-1; i++){
        bool isSwap = false;
        for (int j=0; j<size-i-1;j++){  //Here j<size-i-1 is for avoiding repetative comparing 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap= true;
            }
        }
        if(isSwap == false){
            // Already sorted
            break;
        }
    }
}

int main(){

// int arr[7]={8,2,4,10,5,1,6};
int arr[6]= {0,1,2,0,1,2};
int size = 6;
// 0 1 2 0 1 2


cout<<"Array before sorting ";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

cout<<"\nArray after sorting ";
bubbleSort(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}