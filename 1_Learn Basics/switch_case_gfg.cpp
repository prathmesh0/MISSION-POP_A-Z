//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isInRange(int N){
        string str[10] = {"one","two", "three", "four", "five", "six", "seven", "eight", "nine","ten"};
    switch(N){
        case 1:
        return str[0];
        
        case 2:
        return str[1];

        case 3:
        return str[2];

        case 4:
        return str[3];
        
        case 5:
        return str[4];
        
        case 6:
        return str[5];
        
        case 7:
        return str[6];
        
        case 8:
        return str[7];
        
        case 9:
        return str[8];
        
        case 10:
        return str[9];
        
        default : return "not in range";
        
    }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isInRange(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends