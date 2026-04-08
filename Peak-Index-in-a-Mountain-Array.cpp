1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& arr) {
4 int left = 0;
5        int right = arr.size() - 1;
6        
7        while (left < right) {
8            int mid = left + (right - left) / 2;
9            
10            // Check if we are on the upward slope
11            if (arr[mid] < arr[mid + 1]) {
12                // The peak must be to the right
13                left = mid + 1;
14            } else {
15                // We are on the downward slope or at the peak
16                // The peak could be mid, so we don't skip it
17                right = mid;
18            }
19        }
20        
21        // When left == right, we have found the peak index
22        return left;
23    }
24};