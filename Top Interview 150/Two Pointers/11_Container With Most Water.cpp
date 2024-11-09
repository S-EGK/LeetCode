class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int i = 0;
        int j = height.size()-1;
        while (i < j) {
            int w = j - i;
            int h = min(height[i], height[j]);
            int area = w * h;
            max_area = max(max_area, area);

            if (height[i] < height[j]) {
                i += 1;
            }
            else {
                j -= 1;
            }
        }
        return max_area;
    }
};