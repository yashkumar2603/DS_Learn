#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define all(x) (x).begin(), (x).end()

// Debug, remove before submit.
/*void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << '(' << #__VA_ARGS__ << '):', dbg_out(__VA_ARGS__)*/

int Solve_BottomUp(int n)
{
    // step1 : Create DP array
    vector<int> dp(n + 1, -1);
    // step 2 : observe base case in recursive solution and try ot clone it in here.
    dp[0] = 0;

    dp[1] = 1; // Can also check before accessing the 1st element to avoid errors if 0 is asked.
    // step 3: Clone the recursive call
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int sapce_optimised(int n)
{
    int prev1 = 0;
    int prev2 = 1;
    int curr;
    if (n == 0)
        return prev1;
    if (n == 1)
        return prev2;

    for (int i = 2; i <= n; i++)
    {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int Solve(int n, vector<int> &dp)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = Solve(n - 1, dp) + Solve(n - 2, dp);
    return dp[n];
}

int fib(int n)
{
    vector<int> dp(n + 1, -1);
    int ans = Solve(n, dp);
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << fib(n) << "\n";
    cout << Solve_BottomUp(n);
    return 0;
}

// Find code on obsidian and the notes in diary