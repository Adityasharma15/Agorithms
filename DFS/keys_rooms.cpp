// 841. Keys and Rooms

class Solution {

    public:
    void dfs(vector<vector<int>> &rooms, int room, vector<bool> &visited){

        visited[room] = true;
        for(auto key: rooms[room]){
            if(!visited[key])
                dfs(rooms, key, visited);
        }

        return;
    }

public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, 0, visited);

        for(int i = 0; i<n; i++){
            if(!visited[i])
                return false;
        }

        return true;
    }
};
