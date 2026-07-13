class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = piles[0];
        for (int i = 1; i < piles.size(); i++){
            if (high < piles[i]){
                high = piles[i];
            }
        }

        int ans = 0; 
        while (low <= high){
            long long totalHours = 0;
            int mid = low + (high - low)/2;
            for (int j = 0; j < piles.size(); j++){
                long long hours = (piles[j] + mid - 1) / mid;
                totalHours += hours;
            }
            if ( totalHours <= h){
                ans = mid;
                high = mid -1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};