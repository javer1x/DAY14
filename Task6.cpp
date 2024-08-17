#include <iostream>
#include <string>
using namespace std;
string compressString(const string& input) {
    if (input.empty()) {
        return input;
    }
    string compressed;
    int count = 1; 
    for (size_t i = 1; i < input.length(); ++i) {
        if (input[i] == input[i - 1]) {
            ++count;
        } else {
            compressed += input[i - 1];
            compressed += to_string(count);
            count = 1; 
        }
    }
    compressed += input[input.length() - 1];
    compressed += to_string(count);
    return compressed.length() < input.length() ? compressed : input;
}
int main() {
    string testStr = "aabcccccaaa"; 
    string result = compressString(testStr);
    cout << "Original String: " << testStr << endl;
    cout << "Compressed String: " << result << endl;
    return 0;
}