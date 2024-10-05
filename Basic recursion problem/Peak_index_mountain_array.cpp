#include<iostream>
using namespace std;

int peakElement(int arr[] ,int low , int high , int n){
    int mid = low +(high-low)/2;

    if((mid == 0 || arr[mid-1]) && (mid == n-1 || arr[mid+1] <= arr[mid])){
        return mid;
    }
    else if (mid > 0 && arr[mid-1] > arr[mid])
    {
        return peakElement(arr , low , mid-1 ,n);
    }
    else{
        return peakElement(arr , high , mid+1 ,n);
    }
}

int main(){
    int arr[] = {0 , 3 , 8 , 9 , 5 , 2};
    int n = 6;
    cout<<"Peak elemnent index is : "<<peakElement( arr, 0 , n-1 , n)<<endl;

    return 0;
}


// EXAMPLE - 

// INPUT - 
// arr = {0 , 3 , 8 , 9 , 5 , 2}

// OUTPUT - 
// 9