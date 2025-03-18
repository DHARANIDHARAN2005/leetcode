char shift(char s,char x)
{
    return s+(x-'0');
}

char* replaceDigits(char* s) {
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(isdigit(s[i]))
        {
            s[i]=shift(s[i-1], s[i]);
        }
    }
    return s;
    
}