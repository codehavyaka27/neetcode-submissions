class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxi=0;
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int width=right-left;
            int height=min(nums[left],nums[right]);
            int area=width*height;
            maxi=max(maxi,area);
            if(nums[left]<=nums[right])left++;
            else right--;
        }
        return maxi;
        
        
    }
};

//it has to be two pointers bcz no other approach i dont think would be suitable
//but i cant sort the array it would fk up the width
//then how to implement the two pointers??
//we need something like maxwidth and maxheight that would help to find max area
//for bruteforce i would simply need two for loops and calculate area and store in max
//i tried this bruteforce and got tle
//need to think more about optimization
