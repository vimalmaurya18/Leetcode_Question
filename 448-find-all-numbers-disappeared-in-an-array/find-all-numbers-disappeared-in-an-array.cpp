class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int a = 1;
        int i = 0;
        while(i < nums.size()) {
            if(nums[i] == a) {
                a++;
                i++;
            }
            else if(nums[i] > a) {
                ans.push_back(a);
                a++;
            }
            else {
                i++;
            }
        }
        while(a <= nums.size()) {
            ans.push_back(a);
            a++;
        }
        return ans;
    }
};