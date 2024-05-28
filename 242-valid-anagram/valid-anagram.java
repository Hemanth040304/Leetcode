class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;

        char[] s_String = s.toCharArray();
        char[] t_String = t.toCharArray();

        Arrays.sort(s_String);
        Arrays.sort(t_String);

        return Arrays.equals(s_String,t_String);
    }
}