#include<bits/stdc++.h>
using namespace std;
void findmax(int arr[],int n){
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(max<arr[i])
            max=arr[i];
    }
    cout<<"max element is: "<< max<<endl;
}
void findmin(int arr[], int n){
    int min = arr[0];
    for(int i =1 ; i<n ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<< "min element is :"<< min<<endl;
}
int main(){
    int pal[]={1,23,60,29,5};
    int n = sizeof(pal)/sizeof(pal[0]);
    findmax(pal,n);
    findmin(pal,n);
    return 0;
}