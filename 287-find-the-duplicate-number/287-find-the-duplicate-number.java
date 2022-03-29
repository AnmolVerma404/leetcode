class Solution {
    public int findDuplicate(int[] a) {
        HashMap<Integer,Integer>mp = new HashMap<>();
        int n = a.length;
        for(int i = 0 ;i<n;i++){
            if(mp.containsKey(a[i])) return a[i];
            mp.put(a[i],i);
        }
        return 0;
    }
}