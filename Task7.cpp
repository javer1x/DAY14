#include <iostream>
#include <cctype>  
#include <string>
using namespace std;
bool isPalindrome(const string& str, const string& charsToIgnore) {
    string cleanedStr;
    for (char ch : str) {
        if (isalnum(ch) && charsToIgnore.find(tolower(ch)) == string::npos) {
            cleanedStr += tolower(ch);
        }
    }
    int left = 0;
    int right = cleanedStr.length() - 1;
    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false;  
        }
        left++;
        right--;
    }
    return true;  
}
int main() {
    string str1 = "A man, a plan, a canal, Panama";
    string str2 = "No 'x' in Nixon";
    string str3 = "Hello, World!";
    string charsToIgnore = "x";  
    cout << "\"" << str1 << "\" is " << (isPalindrome(str1, charsToIgnore) ? "a palindrome" : "not a palindrome") << endl;
    cout << "\"" << str2 << "\" is " << (isPalindrome(str2, charsToIgnore) ? "a palindrome" : "not a palindrome") << endl;
    cout << "\"" << str3 << "\" is " << (isPalindrome(str3, charsToIgnore) ? "a palindrome" : "not a palindrome") << endl;
    return 0;
}