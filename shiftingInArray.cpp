#include <iostream>
using namespace std;

void changing_element(){
int arr[]= {2,5,3,7};
// YOU HAVE TO SHIFT THE POSITION OF 2 WITH 7;
for(int i=0;i<4;i++){
    if(arr[i]==2){
        arr[i]=7;
    }else if(arr[i]==7){
        arr[i]=2;
    }
    else{

    }
}
for (int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}
}

void shifting_element(){
    int arr[5]= {2,4,6,8,10};
    
    // HAVE TO SHIFT 10 AT 1st INDEX;
    int temp = arr[5];
    for(int i =5;i>1;i--){
        arr[i]= arr[i-1];
    }
    arr[1]= 10;
    
   for (int i=0;i<5;i++){
    cout<<arr[i]<<" ";
} 
}

int main(){
    // changing_element();
    shifting_element();
return 0;
}   