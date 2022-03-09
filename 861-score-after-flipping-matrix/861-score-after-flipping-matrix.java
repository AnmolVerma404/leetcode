class Solution {
    public int matrixScore(int[][] g) {
        int r = g.length;
        int c = g[0].length;
        for(int i = 0;i<r;i++){
            if(g[i][0]==0){
                for(int j = 0;j<c;j++){
                    g[i][j] = 1 - g[i][j];
                }
            }
        }
        for(int j = 0;j<c;j++){
            int cz = 0,co = 0;
            for(int i = 0;i<r;i++){
                if(g[i][j]==1) co++;
                else cz++;
            }
            if(cz>co){
                for(int i = 0;i<r;i++){
                    g[i][j] = 1 - g[i][j];
                }
            }
        }
        int res = 0;
        for(int i = 0;i<r;i++){
            int p = 0;
            for(int j = c - 1;j>=0;j--){
                res+=g[i][j]*(1<<p++);
            }
        }
        return res;
    }
}