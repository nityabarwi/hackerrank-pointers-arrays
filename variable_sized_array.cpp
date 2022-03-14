#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x,i,j;
    cin>>n;
    cin>>x;
    vector <vector<int>> a(n);
    for(j=0;j<=n;j++)
    {
        int y;
        cin>>y;
        for(i=0;i<=y;i++)
        {
            int z;
            cin>>z;
            a[j].push_back(z);
        }
    }
    for(j=0;j<=x;j++)
    {
        int b,c;
        cin>>b;
        cin>>c;
        cout<<a[b][c]<<endl;
    }
    
    
    return 0;
}