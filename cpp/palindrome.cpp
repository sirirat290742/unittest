#include <iostream>
#include <cassert>
#include <string>
using namespace std;

bool isPalindrome(string str){
    int left = 0 ;
    int right =str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}