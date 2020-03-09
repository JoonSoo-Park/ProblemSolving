/*
* https://programmers.co.kr/learn/courses/30/lessons/12900
*/
#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    long long int dp[n + 1];
    
    dp[1] = 1;
    dp[2] = 2;
    
    for (int i = 3; i <= n; ++i)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    
    return dp[n];
}
