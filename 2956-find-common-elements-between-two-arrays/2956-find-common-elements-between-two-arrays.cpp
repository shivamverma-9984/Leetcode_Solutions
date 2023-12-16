class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       vector<int>res(2,0);

        unordered_set<int> set_nums1(nums1.begin(), nums1.end());
        unordered_set<int> set_nums2(nums2.begin(), nums2.end());

        for (int i = 0; i < nums1.size(); i++) {
            if (set_nums2.find(nums1[i])!=set_nums2.end()) {
                res[0]++;
            }
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (set_nums1.find(nums2[i])!=set_nums1.end()) {
                res[1]++;
            }
        }

        return res;   
    }
};