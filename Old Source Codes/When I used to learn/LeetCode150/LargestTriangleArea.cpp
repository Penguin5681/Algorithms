// 812. Largest Triangle Area

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0;
        double side_a, side_b, side_c;
        double currArea, semi_perimeter;
        for (int i = 0; i < points.size(); ++i) {
            for (int j = i + 1; j < points.size(); ++j) {
                for (int k = j + 1; k < points.size(); ++k) {
                    side_a = sqrt(pow(points[i][0] - points[j][0], 2) + pow(points[i][1] - points[j][1], 2));
                    side_b = sqrt(pow(points[j][0] - points[k][0], 2) + pow(points[j][1] - points[k][1], 2));
                    side_c = sqrt(pow(points[k][0] - points[i][0], 2) + pow(points[k][1] - points[i][1], 2));
                    semi_perimeter = (side_a + side_b + side_c) / 2;
                    currArea = sqrt(semi_perimeter * (semi_perimeter - side_a) * (semi_perimeter - side_b) * (semi_perimeter - side_c));
                    maxArea = max(maxArea, currArea);
                }
            }
        }
        return maxArea;
    }
};

signed main(void) {

}