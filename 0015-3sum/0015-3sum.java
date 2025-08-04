class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> arr = new ArrayList<>();
        int n = nums.length;
        Arrays.sort(nums);
        for (int i = 0; i < n - 2; i++) {
            if (i != 0 && nums[i - 1] == nums[i]) {
                continue;
            }
            int target = -nums[i];
            int start = i + 1;
            int end = n - 1;
            while (start < end) {
                if (nums[start] + nums[end] == target) {
                    arr.add(new ArrayList<>(Arrays.asList(nums[i], nums[start], nums[end])));
                    while (start < end && nums[start] == nums[start + 1])
                        start++;
                    while (start < end && nums[end] == nums[end - 1])
                        end--;
                    start++;
                    end--;
                } else if (nums[start] + nums[end] < target) {
                    start++;
                } else {
                    end--;
                }

            }

        }
        return arr;
    }
}