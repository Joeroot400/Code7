#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while (t--) {
        long long int n,i,sum=0;cin>>n;
        long long int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n, greater <int>());
        for(i=0;i<n;i+=2) sum+=a[i];
        cout<<sum<<endl;
    }
	return 0;
}
