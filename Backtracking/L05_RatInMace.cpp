#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Choice {
    char dname;//direction name
    int dx;//x coordinate
    int dy;//y co-ordinate
};
bool isSolved(int x,int y,int n){
    if(x==n-1 && y==n-1){//do the x and y reaches last coloum of array...if yes means true
        return true;
    }
    else{
        return false;
    }
}
bool isValid(int newX,int newY,int n,vector<vector<int>>&arr){
    return newX>=0 && newX<n && newY>=0 && newY<n && arr[newX][newY]==1;//some strating condition to check outofbound case and last to check wheather the coloum is valid to move rat
}
void solve(int x,int y,int n,vector<vector<int>>&arr,string &path,vector<string>&res,vector<Choice>&choices){
    if(isSolved(x,y,n)){//last column ge bandre valid path sikkide rat ge anta artha amele adna pushback madidre itu
        res.push_back(path);
        return;
    }
    for(const auto choice:choices){//choices vector na traverse madta edivi..each iteration allu check madtivi like Upper hodre valid howda elva anta hange continue
        int newX=x+choice.dx;//elli new coloum na just initialise madiddivi
        int newY=y+choice.dy;//same above
        if(isValid(newX,newY,n,arr)){//aa above coloum valid adre current alli ero...kelage baritini
            arr[x][y]=0;//edu 1 ero element na 0 madtivi yak andre rat matte aa column ge barbardu anta aste(because repeate agi round hakte erbardu rat anta);;;
            path.push_back(choice.dname);//just sikkiro path na add madta edivi string ge
            solve(newX,newY,n,arr,path,res,choices);//new sikkiro colomn ge function karita edivi 
            arr[x][y]=1;//amele matte aa column na matte 1 agi madtivi ..zero madid na
            path.pop_back();//pop back madtivi as its backtracking
        }
    }
}
int main(){
    vector<vector<int>>arr={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int n=arr[0].size();
    string path="";
    vector<Choice>choices={{'U',-1,0},{'D',1,0},{'L',0,-1},{'R',0,1}};
    vector<string>res;
    if(arr[0][0]==1){
        solve(0,0,n,arr,path,res,choices);
    }
    for(string re:res){
        cout<<re<<" ";
    }
}



//kambke tough ede but arta madko try hard to understand ganesh.........
//i know u can do it