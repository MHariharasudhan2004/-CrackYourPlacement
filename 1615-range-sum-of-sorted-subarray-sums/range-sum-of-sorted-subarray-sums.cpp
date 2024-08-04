class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
         vector<long long> arr;
        for (int i = 0; i < n; ++i) {
            long sum = 0;
            for (int j = i; j < n; ++j) {
                sum += nums[j];
                arr.push_back(sum);
            }
        }
        sort(arr.begin(), arr.end());
        long sum = 0;
        for (int l = left - 1; l < right; ++l) {
            sum += arr[l];
        }
        return sum%1000000007;
    }
};