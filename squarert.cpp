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
double morePrecision(int n, int precision,int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i=0; i <precision; i++)
    {
        factor= factor/10;
        for(double j = ans; j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main (){
    int n;
    cout<<"Inter the nubmer to find Sqrt:";
    cin>>n;
    int tempsol= findSqrt(n);
    double sol = morePrecision(n,3,tempsol);
    cout<<"Square Root of "<<n<< " = "<<sol; 

}