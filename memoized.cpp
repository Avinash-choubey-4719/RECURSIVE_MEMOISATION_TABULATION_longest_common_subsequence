#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];

int lcs(string x, string y, int m, int n){
    if(m == 0 || n == 0){
        return 0;
    }

    if(t[m][n] != -1){
        return t[m][n];
    }

    if(x[m] == y[n]){
        return t[m][n] = 1 + lcs(x, y, m - 1, n - 1);
    }

    if(x[m] != y[n]){
        return t[m][n] = max(lcs(x, y, m - 1, n), lcs(x, y, m, n - 1));
    }
}

int main(){
    string x = "geeksforgeeks";
    string y = "geeksforquiz";
    int m = x.length();
    int n = y.length();

    memset(t, -1, sizeof(t));

    int result = lcs(x, y, m, n);
    cout<<result<<endl;
    return 0;
}