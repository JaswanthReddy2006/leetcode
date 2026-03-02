1class Solution {
2    public String reverseWords(String s) {
3        String[] arr = s.split("\\s+");
4        StringBuilder sb = new StringBuilder();
5          for (int i = arr.length - 1; i >= 0; i--) {
6            sb.append(arr[i]);
7            if (i > 0) {
8                sb.append(" ");
9            }
10        }
11        return sb.toString().trim();
12    }
13}