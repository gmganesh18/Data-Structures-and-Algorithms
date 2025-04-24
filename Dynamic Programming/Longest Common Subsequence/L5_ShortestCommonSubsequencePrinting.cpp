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
        void LCS(string a,string b,int n,int m){
            for(int i=1;i<n+1;i++){
                for(int j=1;j<m+1;j++){
                    if(a[i-1]==b[j-1]){
                        t[i][j]=1+t[i-1][j-1];
                    }
                    else{
                        t[i][j]=max(t[i][j-1],t[i-1][j]);
                    }
                }
            }
        }
        string shortestCommonSupersequence(string str1, string str2) {
            int n=str1.length();
            int m=str2.length();
            initialisation(n,m);
            LCS(str1,str2,n,m);
            string result="";
            int i=n;
            int j=m;
            while(i>0 && j>0){
                if(str1[i-1]==str2[j-1]){
                    result+=str1[i-1];
                    i--;
                    j--;
                }
                else if(t[i-1][j]>t[i][j-1]){
                    result+=str1[i-1];
                    i--;
                }
                else{
                    result+=str2[j-1];
                    j--;
                }
            }
            while(i>0){
                result+=str1[i-- -1];
            }
            while(j>0){
                result+=str2[j-- -1];
            }
            reverse(result.begin(),result.end());
            return result;
        }
    };




//its leetcode code
// in this no main function is there all are functions only