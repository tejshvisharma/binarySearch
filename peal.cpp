#include<iostream>
using namespace std;
int peakValue(int arr[], int size){
    int start= 0;
    int end= size-1;
    int mid = (start + (end-start)/2);
    while (start<end)
    {
       if (arr[mid]<arr[mid+1])
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
int main(){
    int odd[5]={1,99,100,99,35};
   int even[13]={24,69,100,99,79,67,55,46,39,37,36,26,19};
    int index = peakValue(even,13);
    cout<<"index of Peak Value is "<<index<<endl;
    
}