#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        unordered_map<int, string> intToRomanMap = {
            {1, "I"},
            {4, "IV"},
            {5, "V"},
            {9, "IX"},
            {10, "X"},
            {40, "XL"},
            {50, "L"},
            {90, "XC"},
            {100, "C"},
            {400, "CD"},
            {500, "D"},
            {900, "CM"},
            {1000, "M"},
        };

        string result = "";
        int pow10 = 3, digit, denominator;
        for (int i = 3; i >= 0; i--)
        {
            denominator = pow(10, i);
            digit = num / denominator;
            num = num % denominator;
            switch (digit)
            {
            case 0:
                break;
            case 1:
            case 2:
            case 3:
                for (int j = 0; j < digit; j++)
                {
                    result += intToRomanMap[1 * denominator];
                }
                break;
            case 4:
            case 5:
            case 9:
                result += intToRomanMap[digit * denominator];
                break;
            case 6:
            case 7:
            case 8:
                result += intToRomanMap[5 * denominator];
                for (int j = 0; j < digit - 5; j++)
                {
                    result += intToRomanMap[1 * denominator];
                }
                break;
            default:
                break;
            }
        }

        return result;
    }
};
