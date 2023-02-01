// Code By Mohammed Faheem G S
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define MOD 1000000007
#define mod(a, m) ((a % m) + m) % m
const double PI = 3.141592653589793238460;
using namespace std;
// int primes[10000001];
// int bexp(int, int);
// int mexp(int, int, int);
// bool isPrime(int);
// void sieve();
void Solution()
{
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        Solution();
        cout << endl;
    }
    return 0;
}
// void sieve()
// {
//     int maxN = 10000000;
//     for (int i = 2; i <= maxN; i++)
//         primes[i] = 1;
//     for (int i = 2; i * i <= maxN; i++)
//     {
//         if (primes[i])
//         {
//             for (int j = i * i; j <= maxN; j += i)
//                 primes[j] = 0;
//         }
//     }
// }
// int bexp(int a, int n)
// {
//     int ans = 1;
//     while (n)
//     {
//         if (n % 2)
//             ans *= a, n--;
//         a *= a, n /= 2;
//     }
//     return ans;
// }
// int mexp(int a, int n, int mod)
// {
//     int ans = 1;
//     while (n)
//     {
//         if (n % 2)
//             ans = (1LL * ans * a) % mod, n--;
//         a = (1LL * a * a) % mod, n /= 2;
//     }
//     return ans;
// }
// bool isPrime(int n)
// {
//     if (n == 1 || n == 0)
//         return 0;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// }