
#include <iostream>
using namespace std;



class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string s1;
        int size=s.length();
        int i,j,r;
        for(i=size-1;i>=0;i--)
        {
            if(s[i]=='.')
            {
                r=size-i;//finding size of word
                size=i-1;
                s1.append(s.substr(i+1,r));
                s1.append(".");
            }
        }
        s1.append(s.substr(0,size+1));
        return s1;
       
    } 
};

//{ Driver Code Starts.
int main() 
{


        string s;
        getline(cin,s);
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;

}
// } Driver Code Ends