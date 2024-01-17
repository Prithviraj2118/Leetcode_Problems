public class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Map<Integer, Integer> map = new HashMap<>();

        for (int num : arr) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        Set<Integer> set = new HashSet<>();

        for (int count : map.values()) {
            if (set.contains(count)) {
                return false;
            }
            set.add(count);
        }

        return true;
    }
}
