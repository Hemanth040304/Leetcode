class Solution {
    public int countTriplets(int[] arr) {
        int count = 0;
        int n = arr.length;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int a = 0, b = 0, k = i;
                while(k < j) a^= arr[k++];
                while(k < n){
                    b ^= arr[k++];
                    if(a == b) count++;
                }
            }
        }
        
        return count;
    }
}