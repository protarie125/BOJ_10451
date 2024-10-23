#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vb = vector<bool>;

ll t, n;
vl s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  while (0 < (t--)) {
    cin >> n;
    s = vl(n + 1);
    for (auto i = 1; i <= n; ++i) {
      cin >> s[i];
    }

    auto visit = vb(n + 1, false);
    ll ans = 0;
    for (auto i = 1; i <= n; ++i) {
      if (visit[i]) continue;
      ++ans;

      auto p = i;
      while (!visit[p]) {
        visit[p] = true;
        p = s[p];
      }
    }

    cout << ans << '\n';
  }

  return 0;
}