#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxi(vector<int>&arr){
    int n=arr.size();
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cin>>size;
    vector<int>array;
    for(int i=0;i<size;i++){
       int numm;
       cin>>numm;
       array.push_back(numm);
    }
    cout<< maxi(array);
}