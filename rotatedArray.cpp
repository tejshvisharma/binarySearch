#include<iostream>
using namespace std;
int findPivot(int arr[], int size){
    int start= 0;
    int end= size-1;
    int mid = (start + (end-start)/2);
    while (start<end)
    {
       if (arr[mid]>=arr[0])
       {
        start = mid+1;
       }
       else
       {
        end = mid; 
       }
        
        mid = (start + (end-start)/2);
        
        
    }
    return start;
}
int binarySearch(int arr[], int size, int key){
    int pivot = findPivot(arr,size);
    int start,end;
    if ( key>=arr[pivot] && key <= (size-1) )
    {
       start = pivot;
       end = size-1;
    }
    if(key>=arr[0] && key>arr[pivot])
    {
        start = 0;
        end = pivot-1;
    }
    
    int mid = (start + (end-start)/2);
    while (start<=end)
    {
        if (arr[mid]==key){
            return mid;
         }
        if(key > arr[mid]){
           start = mid+1;
        }
        else{
        end = mid-1;
        }
        mid = (start + (end-start)/2);
        
        
    }
    return -1;
    


}
int main(){
    int arr[11] = {6,7,8,9,11,12,1,2,3,4,5};
    int keyIndex = binarySearch(arr,11,2);
    cout<<keyIndex;
    
}