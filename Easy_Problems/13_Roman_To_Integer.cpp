/*
Info:
    Runtime:
        0 ms,
        Beats: 100%

    Memory:
        10.08 MB,
        Beats: 86.47%
*/

#include <vector>

class Solution {
public:
    int romanToInt(string s) {

        short int number = 0;

        for (unsigned char i = 0; i < s.size(); i++){
            
            if (s[i] == 'M'){

                number += 1000;
                
            }
            else if (s[i] == 'D'){

                number += 500;

            }
            else if (s[i] == 'C'){

                number += 100;

                if(s[i+1] == 'D' || s[i+1] == 'M'){ //Not necessary to do bound checking. No need to launch an exception when 'i+1' is out of the bounds of 's'
                    number -= 200;
                }
            }
            else if (s[i] == 'L'){

                number += 50;

            }
            else if (s[i] == 'X'){

                number += 10;

                if(s[i+1] == 'L' || s[i+1] == 'C'){
                    number -= 20;
                }
            }
            else if (s[i] == 'V'){

                number += 5;

            }
            else if (s[i] == 'I'){

                number += 1;

                if(s[i+1] == 'V' || s[i+1] == 'X'){
                    number -= 2;
                }
            }
        }

        return number;
    }
};
