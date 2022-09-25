class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0){
            long int reversed = 0;
            int copy = x;
            
            while (copy != 0) {
                reversed *= 10;
                reversed += copy%10;
                copy /= 10;
            }
            return reversed == x;
        }
        return false;
    }
};