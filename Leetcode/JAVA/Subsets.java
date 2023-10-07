import java.util.ArrayList;
import java.util.List;

/* https://leetcode.com/problems/subsets/ */
public class Subsets {
    public static void main(String[] args) {
        int[] nums1 = {1, 2, 3};
        List<List<Integer>> result1 = subsets(nums1);
        System.out.println(result1);

        int[] nums2 = {0};
        List<List<Integer>> result2 = subsets(nums2);
        System.out.println(result2);
    }

    /**
     * Generates all possible subsets of a given integer array with unique elements.
     *
     * @param nums The input integer array containing unique elements.
     * @return A list of lists representing all possible subsets of the input array.
     */
    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backTrack(result, 0, new ArrayList<>(), nums);
        return result;
    }

    private static void backTrack(List<List<Integer>> result, int startIndex, List<Integer> subset, int[] nums) {
        if (startIndex == nums.length) {
            result.add(new ArrayList<>(subset));
        } else {
            subset.add(nums[startIndex]);
            backTrack(result, startIndex + 1, subset, nums);
            subset.remove(subset.size() - 1);
            backTrack(result, startIndex + 1, subset, nums);
        }
    }
}
