int directions[4][2] = {{0, 1}, {0, -1}, {1, 0}, { -1, 0}};
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        
        //Binary Search

        int n = grid.size();
        int low = 0, high = n*n-1;
        while(low < high){
            int mid = low + (high - low)/2;
            vector<vector<int>> visited(n, vector<int>(n,0));
            if(possiblePath(mid, grid, n, 0, 0, visited)){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }

    // function to know if the path is possible or not
    
    int possiblePath(int T, vector<vector<int>>& grid, int N, int i, int j, vector<vector<int>> &visited) {
        
        if(i == N-1 && j == N-1){
            return true;
        }
        
        visited[i][j] = true;
        for(auto dir : directions){
            int i_ = i + dir[0];
            int j_ = j + dir[1];
            if(i_ >= 0 && i_ < N && j_ >= 0 && j_ < N && !visited[i_][j_] && grid[i][j]<=T && grid[i_][j_] <= T){
                
                if(possiblePath(T, grid, N, i_, j_, visited)){
                    return true;
                }
                
            }
        }        
        return false; 
    }
};
