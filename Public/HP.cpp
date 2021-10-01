#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
   bool check(string s)
    {
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i]!=s[s.length()-1-i]) return false;
        }
        return true;
    }
    string longestPalin (string s) {
       string ans="";
        int l=0;
        
        while(s.length())
        {
            for(int j=0;j<s.length();j++)
            {
                if(check(s.substr(0,j+1)))
                {  
                    if(l < (j+1))
                    {
                        l=j+1;   
                        ans=s.substr(0,j+1);
                    }
                }     
            }
            s=s.substr(1);
        }
        return ans; 
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
  // } Driver Code Ends
