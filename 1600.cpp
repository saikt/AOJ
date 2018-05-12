#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
    int m, n_min, n_max, p;
 
    while (cin>>m>>n_min>>n_max, m||n_min||n_max) {
        vector<int> v;
        for (int i = 0; i < m; ++i) {
            cin>>p;
            v.push_back(p);
        }
        sort(v.begin(), v.end(), greater<int>());
        int diff = 0;
        int ans = 0;
        for (int i = n_max - 1; i >= n_min - 1; --i) {
            if (v[i] - v[i+1] > diff) {
                diff = v[i] - v[i+1];
                ans = i;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}