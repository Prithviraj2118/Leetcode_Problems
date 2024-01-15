class Solution:
    def findWinners(self, matches):
        m1 = {}
        s = set()
        v1, v2 = [], []

        for x in matches:
            m1[x[1]] = m1.get(x[1], 0) + 1
            s.add(x[0])

        for key, value in m1.items():
            if value == 1:
                v2.append(key)

        for x in s:
            if x not in m1:
                v1.append(x)
                
        v1.sort()
        v2.sort()
        return [v1, v2]
