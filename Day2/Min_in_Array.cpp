#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int minimum(vector<int>&arr){
    int n=arr.size();
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    vector<int>array;
    for(int i=0;i<size;i++){
        int nums;
        cin>>nums;
        array.push_back(nums);
    }
    cout<< minimum(array);
}