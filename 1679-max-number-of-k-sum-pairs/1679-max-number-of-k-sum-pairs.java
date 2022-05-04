class Solution {
    public int maxOperations(int[] a, int k) {
        int n = a.length;
        Arrays.sort(a);
        int i = 0,j = n-1, res = 0;
        while(i<j){
            if(a[i] + a[j] == k){
                i++;
                j--;
                res++;
            }else if(a[i] + a[j] > k){
                j--;
            }else{
                i++;
            }
        }
        return res;
    }
}