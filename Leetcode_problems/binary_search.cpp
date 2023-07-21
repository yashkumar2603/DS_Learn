class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int ans = -1;
        int mid;
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                break;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
};