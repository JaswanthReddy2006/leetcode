1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
5        sort(nums1.begin(),nums1.end());
6        int size=nums1.size();
7         if(nums1.size()%2==0){
8            double middle1 = nums1[(size / 2) - 1];
9            double middle2 = nums1[size / 2];
10            return (middle1 + middle2) / 2.0;
11         }
12         else{
13            return nums1[size/2];
14         }
15
16        
17    }
18};