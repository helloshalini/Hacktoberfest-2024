#include<iostream>
using namespace std;
int linearSearch(int arr[] , int sz ,int target)
{
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){    
    int arr[] = {2,9,5,21,76,31};
    int sz=6;
    int target = 21;
    cout<<linearSearch(arr,sz ,target)<<endl;
    return 0;
}

// EXAMPLE - 

// INPUT - 21
// OUTUT - 3