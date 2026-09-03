class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen1 , seen2;

        for(int i=0;i<nums1.size();i++){
            seen1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            seen2.insert(nums2[i]);
        }

        vector<int> ans1 , ans2;
        for (int x : seen1) {
            if (seen2.count(x) == 0) {
                ans1.push_back(x);
                }
            }
            
        for (int x : seen2) {
            if (seen1.count(x) == 0) {
                ans2.push_back(x);
                }
            }
            return {ans1, ans2};
    } 
};