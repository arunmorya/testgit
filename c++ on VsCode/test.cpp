// Here is the top-down approach of 
// dynamic programming 
#include <bits/stdc++.h> 
using namespace std; 
int arr[1005][1005];

int setM(int W, int wt[], int val[], int n) 
{ 
   // Your code here
   if(n==0 || W==0)
        return 0;
  if(arr[n][W]!=-1)
     return arr[n][W];
     
  if(wt[n-1]<=W)
        return arr[n][W]=max(val[n-1]+setM(W-wt[n-1], wt, val, n-1),
                            setM(W,wt,val,n -1));
    else 
        return arr[n][W]=setM( W,  wt,  val,  n-1);  
}

int knapSack(int W,int wt[],int val[],int n)
{
    memset(arr,-1,sizeof(arr));
    return setM(W,wt,val,n);
}


int main() 
{ 
    //memset(arr,-1,sizeof(arr));
	int val[] = { 10, 20, 30 }; 
	int wt[] = { 1, 1, 1 }; 
	int W = 2; 
	int n = sizeof(val) / sizeof(val[0]); 
	cout << knapSack(W, wt, val, n); 
	return 0; 
}
