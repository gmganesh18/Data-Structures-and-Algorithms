// class Solution {
// public:
//     int LCM(string text1,string text2,int n,int m){
//         if(n==0 || m==0){
//             return 0;
//         }
//         if(text1[n-1]==text2[m-1]){
//             return 1+LCM(text1,text2,n-1,m-1);
//         }
//         else{
//             return max(LCM(text1,text2,n-1,m),LCM(text1,text2,n,m-1));
//         }
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n=text1.length();
//         int m=text2.length();
//         return LCM(text1,text2,n,m);
//     }
// };//recursion code 



// class Solution {
// public:
//     vector<vector<int>>t;
//     void initialisation(int n,int m){
//         t.assign(n+1,vector<int>(m+1,-1));
//     }
//     int LCM(string text1,string text2,int n,int m){
//         if(n==0 || m==0){
//             return 0;
//         }
//         if(t[n][m]!=-1){
//             return t[n][m];
//         }
//         if(text1[n-1]==text2[m-1]){
//             return t[n][m]= 1+LCM(text1,text2,n-1,m-1);
//         }
//         else{
//             return t[n][m]= max(LCM(text1,text2,n-1,m),LCM(text1,text2,n,m-1));
//         }
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         int n=text1.length();
//         int m=text2.length();
//         initialisation(n,m);
//         return LCM(text1,text2,n,m);
//     }
// };//this is memorisation approach



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
        int LCM(string text1,string text2,int n,int m){
            for(int i=1;i<n+1;i++){
                for(int j=1;j<m+1;j++){
                    if(text1[i-1]==text2[j-1]){
                        t[i][j]= 1+t[i-1][j-1];
                    }
                    else{
                        t[i][j]= max(t[i-1][j],t[i][j-1]);
                    }
                }
            }
            return t[n][m];
        }
        int longestCommonSubsequence(string text1, string text2) {
            int n=text1.length();
            int m=text2.length();
            initialisation(n,m);
            return LCM(text1,text2,n,m);
        }
    };
    
    
    //dp starting table initialisation is done only in top down approch .dont think tooo much what to initialise for that just as u had already a recursion code. Recursion code's base case is the initialisation for dp starting table
    
    
    