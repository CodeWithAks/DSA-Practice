class Solution {
public:
    int reverse(int n){
        int reverseNum = 0; 
        while(n!=0){
            int digit = n%10; 
            if(reverseNum > INT_MAX/10 || reverseNum < INT_MIN/10){ //overflow
                return 0;
            }
            reverseNum = reverseNum*10 +digit;
            n = n/10;
        }
        return reverseNum;
    }

    bool isPalindrome(int n) {
        if (n < 0) return false ;
        int reverseNum = reverse(n);
        return n == reverseNum; 
    }
};