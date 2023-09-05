#include<bits/stdc++.h>
using namespace std;


// Binary search
 int firstOccurence(vector<int>&arr,int key){
    sort(arr.begin(),arr.end());    //first sort the array 
    int start = 0;
    int end = arr.size()-1;
    int ans;
    while(start <= end){
        int mid = start + (end - start)/2;     //mid index
        if(arr[mid] == key){                    //if element of mid index equals with key element then store index in res
            ans = mid;
            end = mid - 1;                        //update end variable as mid-1  to check if there is any occurence of element before
        }
        else if(arr[mid]<key){                    //if element at mid is less than key then move to right subarray
            start = mid + 1;
        }
        else{
            end = mid - 1;                         //if element at mid is greater than key then move to left subarray
        }
    }
    return ans;
 }

int main(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;
    vector<int>array(size);
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key element:";
    cin>>key;
    int index = firstOccurence(array,key);
    cout<<"Key found at position: "<<index;

}