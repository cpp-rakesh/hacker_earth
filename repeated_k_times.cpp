/*
  Problem : Repeated K Times
  Author : Rakesh Kumar
  Date: 25/08/2020
*/

#include <bits/stdc++.h>

using ull = unsigned long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;
    std::vector<int> v(n + 1, 0);
    while (n--) {
        int e = 0;
        std::cin >> e;
        ++v[e];
    }

    int k = 0;
    std::cin >> k;
    for (std::size_t i = 0; i < v.size(); ++i) {
        if (v[i] == k) {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}
