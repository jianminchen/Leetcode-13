http://bangbingsyb.blogspot.ca/2014/11/leetcode-search-in-rotated-sorted-array.html

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int start = 0, end = nums.size()-1;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(nums[mid]==target) return true;  
       
            if(nums[mid]<nums[end]) { // right half sorted
                if(target>nums[mid] && target<=nums[end])
                    start = mid+1;
                else
                    end = mid-1;
            }
            else if(nums[mid]>nums[end]) {  // left half sorted
                if(target>=nums[start] && target<nums[mid]) 
                    end = mid-1;
                else
                    start = mid+1;
            }
            else {
                end--;
            }
        }
        return false;
    }
};
