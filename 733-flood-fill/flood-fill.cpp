class Solution {
public:
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};

    bool valid(int i, int j, int n, int m) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
            int m = image.size();
            int n = image[0].size();

            int original = image[sr][sc];

            if(image[sr][sc]==color) return image;

            queue<pair<int,int>>q;
            q.push({sr,sc});
            image[sr][sc] = color;

            while(!q.empty()){
                int i = q.front().first;
                int j =  q.front().second;
                q.pop();

                for(int k=0;k<4;k++){
                    int new_i = i+row[k];
                    int new_j = j+col[k];
                    if(valid(new_i,new_j,m,n) && image[new_i][new_j]==original){
                        image[new_i][new_j]=color;
                        q.push({new_i,new_j});
                    }
                }
            }
            return image;
    }
};