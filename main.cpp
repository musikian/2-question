#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    unordered_set<int> us;
    cout << "Enter " << N << " numbers: ";
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        us.insert(x);
    }

    int search;
    cout << "Enter number to search: ";
    cin >> search;
    
    cout << (us.count(search) ? "Found" : "Not Found") << endl;

    return 0;
}
