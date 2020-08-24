/*
  Problem : Simple Search
  Author : Rakesh Kumar
  Date: 25/08/2020
*/

#include <bits/stdc++.h>

using ll = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int n = 0;
    std::cin >> n;

    std::vector<ll> v;
    while(n--) {
        ll e = 0;
        std::cin >> e;
        v.emplace_back(e);
    }
    ll k = 0;
    std::cin >> k;

    for (std::size_t i = 0; i < v.size(); ++i) {
        if (k == v[i]) {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}
