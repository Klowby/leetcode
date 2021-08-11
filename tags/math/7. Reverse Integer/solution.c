int reverse(int x){
    int result = 0;
    while(x != 0) {//INT_MIN = -2147483648; INT_MAX = 2147483647;
        if(x < INT_MIN + 7 || x > INT_MAX - 6)
            return 0;
        if (result < INT_MIN / 10 || result > INT_MAX / 10)
            return 0;
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}