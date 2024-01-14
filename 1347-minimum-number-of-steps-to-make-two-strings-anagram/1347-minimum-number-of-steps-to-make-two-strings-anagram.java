class Solution {
    public int minSteps(String s, String t) {
        Map<Character, Integer> m1 = new HashMap<>();
        int cnt = 0;

        for (char x : s.toCharArray()) {
            m1.put(x, m1.getOrDefault(x, 0) + 1);
        }

        char[] tArray = t.toCharArray();
        for (int i = 0; i < tArray.length; i++) {
            if (m1.containsKey(tArray[i]) && m1.get(tArray[i]) > 1) {
                m1.put(tArray[i], m1.get(tArray[i]) - 1);
                tArray[i] = '.'; // Replace the current char by '.'
            } else if (m1.containsKey(tArray[i]) && m1.get(tArray[i]) == 1) {
                m1.remove(tArray[i]);
                tArray[i] = '.'; // Replace the current char by '.'
            }
        }

        for (char x : tArray) {
            if (x != '.') {
                cnt++;
            }
        }
        return cnt;
    }
};