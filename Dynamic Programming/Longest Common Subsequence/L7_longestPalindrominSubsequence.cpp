class Solution {
    public:
        vector<vector<int>>t;
        void initialisation(int n,int m){
            t.assign(n+1,vector<int>(m+1));
            for(int i=0;i<n+1;i++){
                for(int j=0;j<m+1;j++){
                    if(i==0 || j==0){
                        t[i][j]=0;
                    }
                }
            }
        }
        int LCS(string s,string s1,int n,int m){
            for(int i=1;i<n+1;i++){
                for(int j=1;j<m+1;j++){
                   if(s[i-1]==s1[j-1]){
                        t[i][j]=1+t[i-1][j-1];
                   } 
                   else{
                        t[i][j]=max(t[i-1][j],t[i][j-1]);
                   }
                }
            }
            return t[n][m];
        }
        int longestPalindromeSubseq(string s) {
            string s1=s;
            reverse(s1.begin(),s1.end());
            int n=s.length();
            int m=s1.length();
            initialisation(n,m);
            int val=LCS(s,s1,n,m);
            return val;
        }
    };




    516. Longest Palindromic Subsequence
  
    Given a string s, find the longest palindromic subsequence's length in s.
    
    A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.
    
     
    
    Example 1:
    
    Input: s = "bbbab"
    Output: 4
    Explanation: One possible longest palindromic subsequence is "bbbb".
    Example 2:
    
    Input: s = "cbbd"
    Output: 2
    Explanation: One possible longest palindromic subsequence is "bb".



    how to think its LCS problem only

    first we need to think about the prolem see minimum longest asked means think of dp then check the input format as its one stirng  and output format is int 
    input is string but only one string is there but in lcs two strings will be there but 2 cases are matching here 

    if 2/3 is matching means its lcs problem only

    