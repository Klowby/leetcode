bool isPalindrome(int x){
    int nums[10];
    int size = 0;
    int i;
    if(x < 0)
        return false;
    if(x == 0)
        return true;
    while(x != 0) {
        nums[size] = x % 10;
        x /= 10;
        size++;
    }
    for(i = 0; i < size / 2; i++) {
        if(nums[i] != nums[size - 1 - i])
            return false;
    }
    return true;
}