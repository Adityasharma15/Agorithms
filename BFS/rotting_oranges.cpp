// 994. Rotting Oranges

class Solution {
    // BFS - Rotten tomatoes into the queue
    // keep count of variable time
    // change value to -1 when some cell is visited
    // at last check if still some fresh left

public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> bfs;
        int time = 0;

        // pushing all rottens into queue
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2)
                    bfs.push({i,j});
            }
        }

        while(!bfs.empty()){

            // keep count if some orange is freshened
            // in this iteration
            bool freshen = false;
            int size = bfs.size();
            while(size--){

            int i = bfs.front().first;
            int j = bfs.front().second;
            bfs.pop();

            // checking left
            if(i){
                // only if it is a fresh orange
                if(grid[i-1][j] == 1){
                    // marking visited
                    grid[i-1][j] = -1;
                    bfs.push({i-1,j});
                    freshen = true;
                }
            }

            //checking right
            if(i<(n-1)){
                if(grid[i+1][j] == 1){
                    grid[i+1][j] = -1;
                    bfs.push({i+1,j});
                    freshen = true;
                }
            }

            //checking upper
            if(j){
                if(grid[i][j-1] == 1){
                    grid[i][j-1] = -1;
                    bfs.push({i, j-1});
                    freshen = true;
                }
            }

            // checking lower
            if(j<(m-1)){
                if(grid[i][j+1] == 1){
                    grid[i][j+1] = -1;
                    bfs.push({i, j+1});
                    freshen = true;
                }
             }
            }

            if(freshen)
                time++;
        }


        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){

                // if someone is still fresh
                if(grid[i][j] == 1)
                    return -1;
            }
        }

        return time;
    }
};
