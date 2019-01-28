//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<string> PalindromFilter(vector<string> words, int minLength) {
//    vector<string> result;
//    for (auto word : words) {
//        bool isPalindrom = true;
//        for (int i = 0; i < word.length(); ++i) {
//            if (word[i] != word[word.length() - 1 - i]) {
//                isPalindrom = false;
//            }
//        }
//        if (isPalindrom && word.length() >= minLength) {
//            result.push_back(word);
//            cout << word << endl;
//        }
//    }
//    return result;
//}
//
//int main() {
//    vector<string> words = {"abacaba", "aba"};
//    PalindromFilter(words, 5);
//    return 0;
//}
