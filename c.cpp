#include<bits/stdc++.h>
using namespace std;

long long gcd(int i,int j)
{
    return __gcd(i,j);
}

long long countGCD(long long L, long long R, long long g)
{
    cout<<"log";
    // Setting the value of L, R.
    L = (L + g - 1) / g;
    R = R/ g;

    // For each possible pair check if GCD is 1.
    long long ans = 0;
    for (long long i = L; i <= R; i++)
        for (long long j = L; j <= R; j++)
            if (gcd(i, j) == 1)
                ans++;

    return ans;
}

int main()
{
    long long a=42;
    long long b=9999999967;
    long long gc = gcd(a,b);
    long long ans = countGCD(a,a+b-1,gc);
    cout<<"ans is "<<ans;
    return 0;
}
