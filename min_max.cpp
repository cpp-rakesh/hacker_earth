/*
  Problem : Min-Max
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

    ull min = 0, max = 0, sum = 0;
    std::cin >> min; --n;
    max = sum = min;
    while (n--) {
        ull e = 0;
        std::cin >> e;
        min = std::min(min, e);
        max = std::max(max, e);
        sum += e;
    }
    std::cout << sum - max << " " << sum - min << std::endl;

    return 0;
}
