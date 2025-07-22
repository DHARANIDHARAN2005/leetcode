class Solution {
    public char nextGreatestLetter(char[] l, char tar) {
        int st=0,en=l.length-1,mid=0;
        if(tar>=l[en])
            {
                return l[0];
            }
        while(st<=en)
        {
            mid=(st+en)/2;
            if(tar<l[mid])
            {
                en=mid-1;
            }
            else{
                st=mid+1;
            }
        }
         return l[st];
    }}
        