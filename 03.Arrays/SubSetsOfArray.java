import java.util.*;

/**
 * for n = 3 [1, 2, 3]
 * 
 * 000 []
 * 001 [3]
 * 010 [2]
 * 011 [2, 3]
 * 100 [1]
 * 101 [1, 3]
 * 110 [1, 2]
 * 111 [1, 2, 3]
 * 
 */

public class SubSetsOfArray {

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        int n = nums.length;

        // 1 << n means 2^n subsets
        for (int i = 0; i < (1 << n); i++) {
            List<Integer> temp = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) == 0)
                    temp.add(nums[j]);
            }
            res.add(temp);
        }
        return res;
    }

}
