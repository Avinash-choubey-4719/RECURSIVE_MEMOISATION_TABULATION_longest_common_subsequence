#include<bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int m, int n){
    if(m == 0 || n == 0){
        return 0;
    }

    if(x[m] == y[n]){
        return 1 + lcs(x, y, m - 1, n - 1);
    }

    if(x[m] != y[m]){
        return max(lcs(x, y, m - 1, n), lcs(x, y, m, n - 1));
    }
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