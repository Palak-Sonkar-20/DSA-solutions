#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[] , int n ){
    for(int i =0 ; i<n/2 ; i++){
        swap( arr[i], arr[n-1-i]);
    }
    cout<<"reversed array is: "<< endl;
    for (int i=0 ; i<n ; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}
int main(){
    int pal[]={1,23,60,29,5};
    int n = sizeof(pal)/sizeof(pal[0]);
    reverse(pal,n);
    return 0;
}