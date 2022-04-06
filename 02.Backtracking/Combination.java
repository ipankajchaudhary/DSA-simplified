import java.util.*;

/**
 * Given two integers n and k, return all possible combinations of k numbers out
 * of the range [1, n].
 * 
 * You may return the answer in any order.
 * 
 * n = 4, k = 2
 * 4C2 = 6
 * combinations => [1, 2] [1, 3] [1, 4] [2, 3] [2, 4] [3, 4]
 */

class Combination {
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new HashSet<Integer>(), n, k, 1);
        return res;
    }

    private static void backtrack(List<List<Integer>> res, Set<Integer> temp, int n, int k, int start) {
        if (temp.size() == k) {
            res.add(new ArrayList<>(temp));
            return;
        }

        for (int i = start; i <= n; i++) {
            if (!temp.contains(i)) {
                temp.add(i);
                backtrack(temp, n, k, i + 1);
                temp.remove(temp.size() - 1);
            }
        }
    }    
}
