#include <bits/stdc++.h>

using namespace std;


class Solution{
public:

	// Function to find maximum product subarray
	
	long long max(long long a, long long b)
	{
	    if(a<b)
	    {
	        return b;
	    }
	    return a;
	}
	long long min(long long a, long long b)
	{
	    if(a>b)
	    {
	        return b;
	    }
	    return a;
	}
	long long maxProduct(int *arr, int n) 
	{
	    if(n==1)
	    {
	        return arr[0];
	    }
	    long long mn = arr[0];
	    long long mx = arr[0];
	    long long ans = arr[0];
	    
	    for(int i = 1;i<n;i++)
	    {
	        long long old_mx = mx;
	        long long curr = arr[i];
	        long long f = max(0,curr);
	        long long s = max(mx *curr, mn *curr);
	        mx = max(f,s);
	        
	        long long f2 = min(0,curr);
	        long long s2 = min(old_mx *curr, mn * curr);
	        mn = min(f2,s2);
	        
	       // cout<<mx<<" , "<<mn<<endl;
	        
	        ans = max(ans,max(mx,mn));
	        
	        
	    }
	    
	    return ans;
	    
	    
	    
	    
	    
	    return mx;
	}
};

// { Driver Code Starts.

int main() {
    int t =1 ;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}