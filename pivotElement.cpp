#include<iostream>
using namespace std;
int findPivot(int arr[], int size){
    int start= 0;
    int end= size-1;
    int mid = (start + (end-start)/2);
    while (start<end)
    {
       if (arr[mid]>=arr[mid+1])
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
    int odd[5]={99,100,105,1,35};
   int even[16]={24,69,100,99,79,67,55,46,39,37,36,26,19,15,55,88};
    int index = findPivot(even,16);
    cout<<"index of Peak Value is "<<index<<endl;
    
}