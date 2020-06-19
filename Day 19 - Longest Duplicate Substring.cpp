class Solution {
public:
    std::string longestDupSubstring(std::string_view s) {
  const int n = size(s);
  auto check = [&](int k) -> std::optional<std::string_view> {
    std::unordered_set<size_t> hashes;
    for (int i = 0; i <= n - k; ++i) {
      std::string_view sv(&s[i], k);
      auto[_, inserted] = hashes.emplace(std::hash<std::string_view>()(sv));
      if (!inserted)
        return sv;
    }
    return std::nullopt;
  };

  int l = 1, r = n - 1;
  while (l + 1 < r) {
    int m = (l + r) / 2;
    if (check(m))
      l = m;
    else
      r = m;
  }

  auto res = check(r);
  if (!res)
    res = check(l);
  return res ? std::string(*res) : std::string{};
}
};