#include<iostream>
using namespace std;
bool isPossible(int arr[], int n, int k, int mid){
    int painter=1;
    int wall = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]+wall<=mid){
    
            wall += arr[i];
        }
        else
        {
            ++painter;
            if (painter>k || arr[i]>mid)
            {
                return false;
            }
            wall=arr[i];
            
         
        }
        
    }
    return true;
}
    
 
int mTime(int arr[],int n, int k){
    int s=0;
    int sum=0;
    int ans=-1;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if (isPossible( arr,n,k,mid ))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    

}
int main(){
    int arr[4]={5,5,5,5};
    int k=2;
    int minTime = mTime(arr,4,2);
    cout<<"the time min = "<< minTime;

    
}