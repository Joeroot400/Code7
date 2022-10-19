#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            A[i] = i + 1;
        }
        sort(A, A + n, greater<int>());
        int high = n - 1;
        int low = 0;
        while (low < high)
        {
            ans.push_back(A[low]);
            ans.push_back(A[high]);
            low++;
            high--;
        }
        if (n % 2 == 1)
        {
            ans.push_back(A[n / 2]);
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
