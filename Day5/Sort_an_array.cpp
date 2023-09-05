#include<bits/stdc++.h>
using namespace std;


// Sorted an array in ascending order using quick sort
int partition(vector<int>&arr,int start,int end){
    int pivot = arr[end];    //select the pivot element i.e; last element of the array
    int pindex = start;      //set partition index as start
    for(int i=start;i<end;i++){     
        if(arr[i]<=pivot){              //if element is less than pivot then swap current element with partition index(all elements less than pivot element goes to left of pivot)
            swap(arr[i],arr[pindex]);
            pindex++;
        }
    }
    swap(arr[end],arr[pindex]);     //after the loop swap last element with element of partition index(pivot element sorts in correct position)
    return pindex;  //return partition index for further processing 
}
void sort(vector<int>&arr,int start,int end){
    if(start<end){
        int p = partition(arr,start,end);  //partition the array
        sort(arr,start,p-1);    //recursively sorts the left of pivot elements
        sort(arr,p+1,end);      //recursively sorts the right of pivot elements
    }
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
    sort(array,0,size-1);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}

