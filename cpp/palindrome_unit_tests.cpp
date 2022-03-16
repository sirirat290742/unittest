#include <iostream>
#include <cassert>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main(){
    assert(isPalindrome("racecar"));
    assert(!isPalindrome("hello"));
    assert(isPalindrome("dad"));
    cout << "All test passed!" << endl;
}