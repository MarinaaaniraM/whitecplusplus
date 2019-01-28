//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main(int argc, const char * argv[]) {
//    unsigned int n;
//    vector<string> queue;
//    vector<int> result;
//    
//    cout << "Enter:" << endl;
//    cin >> n;
//    
//    for (int i = 0; i < n; ++i) {
//        string command;
//        int number;
//        cin >> command;
//        if (command != "WORRY_COUNT") {
//            cin >> number;
//        }
//        
//        if (command == "COME") {
//            int newSize = queue.size() + number;
//            queue.resize(newSize);
//        } else if (command == "WORRY_COUNT") {
//            int worryCount = 0;
//            for (auto item : queue) {
//                if (item == "WORRY") {
//                    worryCount += 1;
//                }
//            }
//            result.push_back(worryCount);
//        } else {
//            queue[number] = command;
//        }
//    }
//    
//    for (auto item : result) {
//        cout << item << endl;
//    }
//    
//    return 0;
//}
