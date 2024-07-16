// APPROACH : TWO POINTER


class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size() - 1;
        int i = 0;
        int j = h.size() - 1;
        int ans = INT_MIN;
        while (i < j) {
            int temp;
            if (h[i] > h[j]) {
                temp = h[j] * n;
            } else {
                temp = h[i] * n;
            }
            ans = max(ans, temp);
            if (h[i] > +h[j]) {
                j--;
                n--;
            } else {
                i++;
                n--;
            }
        }
        return ans;
    }
};