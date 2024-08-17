#include <iostream>
#include <vector>
#include <algorithm> 
#include <utility>   
using namespace std;
void printPairs(const vector<pair<int, int>>& pairs) {
    for (const auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
}
bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second; 
    }
    return a.first < b.first; 
}
int main() {
    vector<pair<int, int>> pairs = {
        {3, 4},
        {1, 2},
        {3, 1},
        {2, 2},
        {1, 1}
    };
    cout << "Original array of pairs:" << endl;
    printPairs(pairs);
    sort(pairs.begin(), pairs.end(), comparePairs);
    cout << "Sorted array of pairs:" << endl;
    printPairs(pairs);
    return 0;
}