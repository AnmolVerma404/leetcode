class Solution {
    List<List<Integer>>b;
    ArrayList<Integer>[] g;
    int[]ids,low;
    int id;
    public List<List<Integer>> criticalConnections(int n, List<List<Integer>> c) {
        b = new ArrayList<>();
        g = new ArrayList[n];
        ids = new int[n];
        low = new int[n];
        id = 0;
        
        buildGraph(c);
        
        boolean[] v = new boolean[n];
        dfs(v,-1,0);
        
        return b;
    }
    
    private void dfs(boolean[]v,int p,int i){
        v[i] = true;
        ids[i] = low[i] = id++;
        for(int node : g[i]){
            if(node == p) continue;
            if(!v[node]){
                dfs(v,i,node);
                low[i] = Math.min(low[i],low[node]);
                if(ids[i]<low[node]){
                    b.add(Arrays.asList(i,node));
                }
            }else{
                low[i] = Math.min(low[i],ids[node]);
            }
        }
    }
    
    private void buildGraph(List<List<Integer>> c){
        for(int i = 0;i<g.length;i++){
            g[i] = new ArrayList<>();
        }
        for(int i = 0;i<c.size();i++){
            int a = c.get(i).get(0), b = c.get(i).get(1);
            g[a].add(b);
            g[b].add(a);
        }
    }
}