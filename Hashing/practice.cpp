#include<bits/stdc++.h>
using namespace std;

int main(){
//find frequency of each element in an array
    int n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int hash[6] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    for(int i = 0; i < 6; i++){
        if(hash[i] > 0){
            cout<<i<<" "<<hash[i]<<endl;
        }
    }
}