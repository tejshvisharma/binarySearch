#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start= 0;
    int end= size-1;
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
int main () {
    int odd[11]={3,3,3,3,4,5,8,9,11,11,19};
    int even[8]={1,4,5,8,12,17,19,24};
    int index = binarySearch(odd,11,3);
    cout<<index;

}
