bool isPalindrome(int x) {
    long long rev=0,temp=x,c=0;
    while(temp>0)
    {
        c++;
        temp/=10;
    }
    temp=x;
    for(int i=0;i<c;i++)
    {
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==x)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}