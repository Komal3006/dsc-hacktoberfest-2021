//Komal Shaw
//This is a solution for the Anagram problem

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int la=a.length();
        int lb=b.length();
        if (la!=lb)
        return false;
        
        int arr_a[150]={0};
        for(int i=0;i<la;i++)
        arr_a[a[i]]++;
        
        int arr_b[150]={0};
        for(int i=0;i<lb;i++)
        arr_b[b[i]]++;
        
        for(int i=0;i<150;i++)
        {
            if(arr_a[i]!=arr_b[i])
            return false;
        }
        return true;
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends