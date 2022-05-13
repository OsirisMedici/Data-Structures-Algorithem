#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int mergeArr(int *arr, int start, int end){

}

int mergeSort(int *arr, int start, int end)
{
    // base case 
    if (start > end ){
        return ;
    }

    int mid = start + (end - start)/2;

    // Sorting Left case
    mergeSort(arr, start, mid);

    // Sorting Right case
    mergeSort(arr, mid+1, end);

    // Merge array
    mergeArr(arr,start, end );
}

int main (){
    int arr[7] = {23, 34, 32, 12, 2, 100, 87};
    int n = 7;

    mergeSort(arr, 0, n-1);
}