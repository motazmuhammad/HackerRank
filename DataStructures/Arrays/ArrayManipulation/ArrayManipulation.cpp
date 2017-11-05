#include <bits/stdc++.h>
#include<iostream>
using namespace std;
long long x[10000000+5];
int main() {
    int n;
    int m;
    cin >> n >> m;
    for(int a0 = 0; a0 < m; a0++){
        int a;
        int b;
        long long k;
        cin >> a >> b >> k;
        x[a]+=k;
        x[b+1]-=k;
       
    }
    long long mx=-100000000;
    long long sum=0;
    for(int i=0;i<=n;i++)
    {
      sum+=x[i];
        if(sum>mx) mx=sum;
    }
    cout<<mx<<endl;
    return 0;
}
