#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0){
            std::string arr = std::to_string(x);
            int length = size(arr);
            for (size_t i=0; i<length/2; i++) {
                if (arr[i] != arr[length-1-i]) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
};