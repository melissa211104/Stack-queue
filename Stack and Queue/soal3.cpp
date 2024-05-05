#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; 

    stack<int> s;

    for (int i = 0; i < N; ++i) {
        string lifo;
        cin >> lifo;

        if (lifo == "push") {
            int num;
            cin >> num;
            s.push(num);
        } else if (lifo == "pop") {
            if (!s.empty()) {
                s.pop();
            }
        }

        stack<int> temp = s;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    return 0;
}
