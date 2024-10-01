//FLATTEN A 2D ARRAY INTO 1D THEN SORT ANND RETURN K element

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int k;
    cin>>k;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        };
    };
    
    vector<int> one;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            one.push_back(a[i][j]);
        };
    };
    
    sort(one.begin(),one.end());
    int value;
    for(int i=0;i<one.size();i++){
        value=one[k];
    };
    cout<<value;
    return 0;
    
}

