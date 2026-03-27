#include<bits/stdc++.h>
using namespace std;
void firstnegative(vector<int> &arr, int k){
    deque<int> dq;
    vector<int> ans;
    
    for(int i = 0; i< arr.size(); i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
        if(!dq.empty() && dq.front()<i-k+1){
            dq.pop_front();
        }
        if(i>=k-1){
            if(!dq.empty()){
                ans.push_back(arr[dq.front()]);
            }
            else{
                ans.push_back(0);
            }
        }
    }
    for(int i : ans){
        cout<<i<<" ";
    }
}
int main(){
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    firstnegative(arr, k);
}

