class Solution {
    public int[][] transpose(int[][] m) {
        int[][] res = new int[m[0].length][m.length];
        for(int i = 0;i<m[0].length;i++){
            for(int j = 0;j<m.length;j++){
                res[i][j] = m[j][i];
            }
        }
        return res;
    }
}