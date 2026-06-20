/*
Info:
  Runtime:
    0 ms,
    Beats: 100%
  Memory:
    8.54 MB,
    Beats: 65.50%
*/

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0){
            return false;
        }

        int copy_x = x;

        long int reversed = 0;

        char last;

        while (x > 0){
            last = x % 10;
            x /= 10;
            reversed = reversed*10 + last;
        }

        return reversed == copy_x;
    }
};
