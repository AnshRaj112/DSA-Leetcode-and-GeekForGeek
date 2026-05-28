class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            int newIndex = (i + k) % n;
            arr[newIndex] = nums[i];
        }
        nums = arr;
    }
};