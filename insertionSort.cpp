#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size){
    for (int i=1; i<size; i++){
        int j = i-1;
        int temp = arr[i];
        while (j>=0 && arr[j]>temp){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]= temp;
    }
}
int main(){

int arr[7] = {10,1,7,4,8,2,11};
int size = 7;
for(int i = 0 ; i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

insertion_sort(arr,size);
for(int i = 0 ; i<size;i++){
    cout<<arr[i]<<" ";
}




return 0;
}