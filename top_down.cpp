#include<bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int m, int n){
    int t[m + 1][n + 1];
    memset(t, 0, sizeof(t));

    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(x[i] == y[j]){
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else{
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    return t[m][n];
}

int main(){
    string x = "geeksforgeeks";
    string y = "geeksforquiz";
    int m = x.length();
    int n = y.length();

    int result = lcs(x, y, m, n);
    cout<<result<<endl;
    return 0;
}