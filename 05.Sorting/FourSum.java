import java.util.*;
class FourSum {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> res = new ArrayList<>();

        if (nums == null || nums.length == 0) // if input array is empty return empty list
            return res;


        Arrays.sort(nums); // sort the array in ascending order
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                // Reduce the problem to the original two sum
                // a + b + c + d = target
                // c + d = target - (a + b)
                // c + d = new_target
                int rem = target - nums[i] - nums[j]; // target - (a + b)
                int left = j + 1;
                int right = n - 1;

                // since the array is sorted use two pointer approach to find new_target "sum"
                // and keep on reducing the window
                while (left < right) {

                    int sum = nums[left] + nums[right]; // c + d
                    if (sum < rem)
                        left++;
                    else if (sum > rem)
                        right--;
                    else { // if c + d = target - (a + b)
                        List<Integer> temp = new ArrayList<>();
                        temp.add(nums[i]);
                        temp.add(nums[j]);
                        temp.add(nums[left]);
                        temp.add(nums[right]);
                        res.add(temp);

                        while (left < right && nums[left] == temp.get(2))
                            left++; // skip duplicate elements and reduce window
                        while (left < right && nums[right] == temp.get(3))
                            right--; // skip duplicate elements and reduce window
                    }
                }

                while (j + 1 < n && nums[j] == nums[j + 1])
                    j++; // skip duplicate elements and reduce window
            }

            while (i + 1 < n && nums[i] == nums[i + 1])
                i++; // skip duplicate elements and reduce window
        }

        return res;
    }    
}
