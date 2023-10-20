#include<bits/stdc++.h>

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> ans(n,vector<int>(n));
    int x=0; //通し番号
    //前半部分
    for( int k=0; k<n; ++k ){
        for( int i=k; i>=0; --i ){
            int j = k-i;
            ans[i][j] = x;
            ++x;
        }
    }
    //後半部分
    for( int k=n-2;k>=0; --k ){
        for( int i=k; i>=0; --i ){
            int j = k-i;
            ans[n-1-j][n-1-i] = x;
            ++x;
        }
    }
    //出力
    for( int i=0; i<n; ++i ){    
        for( int j=0; j<n; ++j ){
            if(ans[i][j]>9) cout << ans[i][j] << " ";
            else cout << ans[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}

