class Solution {
private:
    int x[4] = {-1, 0, 0, 1};
    int y[4] = {0, -1, 1, 0};

    void depth(int sr, int sc, int color, int originalColor, vector<vector<int>>& image) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != originalColor) return;
        image[sr][sc] = color;
        for (int i = 0; i < 4; i++) {
            depth(sr + x[i], sc + y[i], color, originalColor, image);
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor == color) return image;
        depth(sr, sc, color, originalColor, image);
        return image;
    }
};
