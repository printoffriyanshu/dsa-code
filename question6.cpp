#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while (tt--)
int solve(string s1, string s2, int i, int j)
{
    if (i<0)return j+1;
    if(j<0) return i+1;

    if (s1[i] == s2[j])
        return solve(s1, s2, i - 1, j - 1);
    return 1 + min({solve(s1, s2, i - 1, j), solve(s1, s2, i, j - 1), solve(s1, s2, i - 1, j - 1)});
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << solve(s1, s2, s1.size() - 1, s2.size() - 1);
    return 0;
}
