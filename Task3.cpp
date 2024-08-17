#include <iostream>
#include <string>
using namespace std;
bool stringToBool(const string& str, bool defaultValue) {
    if (str == "true") {
        return true;
    } else if (str == "false") {
        return false;
    } else {
        return defaultValue; 
    }
}
int main() {
    string input1 = "true";
    string input2 = "false";
    string input3 = "invalid"; 
    bool result1 = stringToBool(input1, false);
    bool result2 = stringToBool(input2, false);
    bool result3 = stringToBool(input3, false); 
    cout << "Input: " << input1 << ", Output: " << result1 << endl;
    cout << "Input: " << input2 << ", Output: " << result2 << endl; 
    cout << "Input: " << input3 << ", Output: " << result3 << endl; 

    return 0;
}