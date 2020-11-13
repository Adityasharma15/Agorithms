// 733. Flood Fill

class Solution {

    int original_color = -1;

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        if(original_color == -1){
            original_color = image[sr][sc];
        }

        if(image.empty() || sr == -1 || sr == image.size() || sc == -1 || sc == image[0].size() || image[sr][sc] != original_color || original_color == newColor)
            return image;

        image[sr][sc] = newColor;
        floodFill(image, sr+1, sc, newColor);
        floodFill(image, sr-1, sc, newColor);
        floodFill(image, sr, sc+1, newColor);
        floodFill(image, sr, sc-1, newColor);
        return image;
    }
};
