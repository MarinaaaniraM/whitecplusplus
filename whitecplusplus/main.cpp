#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, const char * argv[]) {
    unsigned int n;
    vector<int> daysCounts = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int currentMonth = 0;
    vector<string> month(daysCounts[currentMonth]);
    
    for (auto item : month) {
        item = "";
    }
    
    cout << "Enter:" << endl;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string command;
        int number;
        string task;
        
        cin >> command;
        if (command == "ADD") {
            cin >> number;
            cin >> task;
            
            if (month[number - 1] == "") {
                month[number - 1] += task;
            } else {
                month[number - 1] += " " + task;
            }
        } else if (command == "DUMP") {
            cin >> number;
            
            if (month[number - 1] != "") {
                long tasksCount = count(month[number - 1].begin(), month[number - 1].end(), ' ');
                cout << tasksCount + 1 << " " << month[number - 1] << endl;
            } else {
                cout << 0 << endl;
            }
        } else if (command == "NEXT") {
            if (currentMonth < 11) {
                currentMonth += 1;
            } else {
                currentMonth = 0;
            }
            vector<string> newMonth(daysCounts[currentMonth]);
            for (int i = 0; i < month.size(); ++i) {
                if (i < newMonth.size() - 1) {
                    newMonth[i] = month[i];
                } else {
                    if (newMonth[newMonth.size() - 1] == "") {
                        newMonth[newMonth.size() - 1] += month[i];
                    } else {
                        newMonth[newMonth.size() - 1] += " " + month[i];
                    }
                }
            }
            month = newMonth;
        }
    }
    return 0;
}
