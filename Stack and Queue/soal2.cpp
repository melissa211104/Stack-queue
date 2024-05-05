#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; 

    queue<int> q;

    for (int i = 0; i < N; ++i) {
        string fifo;
        cin >> fifo;

        if (fifo == "push") {
            int num;
            cin >> num;
            q.push(num);
        } else if (fifo == "pop") {
            if (!q.empty()) {
                q.pop();
            }
        }

        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }

    return 0;
}
