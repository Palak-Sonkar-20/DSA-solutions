#include<bits/stdc++.h>
using namespace std;
int main(){
    int height [] = {1,8,6,2,5,4,8,3,7};
    int i = 0;
    int j = sizeof(height)/sizeof(height[0]) - 1;
    int maxArea = 0;
    while(j>i){
        int area = min(height[i], height[j])*(j-i);
        maxArea = max(maxArea, area);
        if(height[i] < height[j]){
            i++;
        }
        else{
            j--;
        }

    }
    cout << maxArea << endl;
}