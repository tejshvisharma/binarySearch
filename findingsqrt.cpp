#include<iostream>
using namespace std;
long long int findSqrt(int n){
     int start= 0;
    int end= n;
    long long int ans=-1;
    long long int mid = (start + (end-start)/2);
    while (start<=end)
    {
        long long int square = mid*mid;
        if (square==n){
            return mid;
         }
        if(n>square){
           ans = mid;
           start = mid+1;
        }
        else{
        end = mid-1;
        }
        mid = (start + (end-start)/2);
        
        
    }
    return ans;
}

int main(){
    int n;
    cout<< "inter the number to find sqrt:";
    cin>>n;
    long long int squareroot = findSqrt(n);
    cout<<squareroot;
}