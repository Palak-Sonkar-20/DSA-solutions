#include<bits/stdc++.h>
using namespace std;
void sumofarray(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum +=arr[i];
    }
    cout<<"Sum of array elements is: "<< sum<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    sumofarray(arr , n);
    return 0;
}