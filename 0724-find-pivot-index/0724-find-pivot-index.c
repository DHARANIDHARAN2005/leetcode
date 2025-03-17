int pivotIndex(int* nums, int S) {
    int total=0,right=0,left=0;
    for(int i=0;i<S;i++)
    {
        total+=nums[i];
    }
    for(int i=0;i<S;i++)
    {
        right=total-left-nums[i];
        if(right==left)
        {
            return i;
        }
        left+=nums[i];
    }

    return -1;
}