class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> nums1;
        vector<int> nums2;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()/2){
                nums2.push_back(nums[n-i-1]);
            }
            else{
                nums1.push_back(nums[n-i-1]);
            }
        }        
        nums={};
        for(int i=0;i<n/2;i++){
            nums.push_back(nums1[i]);
            nums.push_back(nums2[i]);
        }
        if(nums1.size()!=nums2.size()){
            nums.push_back(nums1[nums1.size()-1]);
        }
    }
};
