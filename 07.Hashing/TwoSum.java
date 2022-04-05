import java.util.*;
class TwoSum {

    /**
     * @param arr array of elements
     * @param target sum of two elements
     * @return index of 2 elements that make the sum
     */
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>(); // to store element's complement and its index
        for (int i = 0; i < nums.length; i++) {
            int rem = target - nums[i]; // get the complement
            if (map.containsKey(rem)) { // if complement is present in map
                return new int[] { map.get(rem), i }; // return the index of the number and complement
            }

            map.put(nums[i], i); // put the number and its index in map
        }

        return new int[] {}; // if no such pair is found, return empty array
    }
}