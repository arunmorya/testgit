#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    //return b==0?a:gcd(b,a%b);
     return b==0?a:gcd(b,a%b);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main(){
    int arr[6]={1,2,3};
    int lcmres=arr[0];
    for(int i=1; i<3; i++)
    {
        lcmres=lcm(lcmres,arr[i]);

    }
    cout<<lcmres<<endl;
    return 0;
}