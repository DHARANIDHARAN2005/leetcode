int lengthOfLongestSubstring(char* s) {
    if (strlen(s)==1) return 1;
    else if (strlen(s)==0) return 0;
    int left=0,max_len=0;
    int seen[256]={0};
    for(int i=0;i<256;i++)
    {
        seen[i]=-1;
    }
    for(int right=0;right<strlen(s);right++)
    {
        if(seen[s[right]]>=left)
        {
            left=seen[s[right]]+1;
        }
        seen[s[right]]=right;
        if(right-left+1 > max_len)
        {
            max_len=right-left+1;
        }
    }
    return max_len;
    
}