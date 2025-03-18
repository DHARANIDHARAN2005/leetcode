bool isAnagram(char* s, char* t) {
    int count[256]={0};
    if(strlen(s)!=strlen(t)) return false;
    for(int i=0;i<strlen(s);i++)
    {
        count[s[i]]++;
        count[t[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if (count[i])
        {
            return false;
        }
    }
    return true;
    
}