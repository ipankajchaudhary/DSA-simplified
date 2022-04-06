import java.util.*;

/**
 * Given an array nums of "distinct integers", return all the possible
 * permutations.
 * You can return the answer in any order.
 * 
 * nums => [1,2,3]
 * 
 * permutations => [1,2,3] [1,3,2] [2,1,3] [2,3,1] [3,1,2] [3,2,1]
 */

class Permutation {
    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();

        if (nums == null || nums.length == 0)
            return res;

        backtrack(res, new HashSet<Integer>(), nums, 0);
        return res;
    }

    private static void backtrack(List<List<Integer>> res, Set<Integer> temp, int[] nums, int index) {
        if (temp.size() == nums.length) {
            res.add(new ArrayList<>(temp));
            return;
        }

        for (int i : nums) {
            if (!temp.contains(i)) {
                temp.add(i);
                backtrack(temp, nums, index + 1);
                temp.remove(index);
            }
        }
    }
}