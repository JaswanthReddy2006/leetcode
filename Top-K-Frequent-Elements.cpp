1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        // 1. Count frequencies using a hash map
5        unordered_map<int, int> counts;
6        for (int num : nums) {
7            counts[num]++;
8        }
9
10        // 2. Transfer map entries into a vector of pairs {frequency, value}
11        vector<pair<int, int>> freqVec;
12        for (auto const& [val, freq] : counts) {
13            freqVec.push_back({freq, val});
14        }
15
16        sort(freqVec.rbegin(), freqVec.rend());
17
18        vector<int> result;
19        for (int i = 0; i < k; i++) {
20            result.push_back(freqVec[i].second);
21        }
22
23        return result;
24    }
25};