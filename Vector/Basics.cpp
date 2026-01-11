#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v;

    // 1. push_back()
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);

    // 2. insert()
    v.insert(v.begin() + 2, 3);  // v = [1, 2, 3, 4]

    // 3. at()
    cout << "Element at index 2: " << v.at(2) << endl;

    // 4. front() and back()
    cout << "Front: " << v.front() << ", Back: " << v.back() << endl;

    // 5. size() and empty()
    cout << "Size: " << v.size() << ", Empty? " << v.empty() << endl;

    // 6. for loop with iterators
    cout << "Vector elements: ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // 7. erase()
    v.erase(v.begin() + 1);  // remove second element
    cout << "After erase: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 8. resize()
    v.resize(6);
    cout << "After resize(6): ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 9. emplace_back()
    v.emplace_back(99);

    // 10. pop_back()
    v.pop_back();

    // 11. assign()
    v.assign(4, 100);  // v = [100, 100, 100, 100]

    // 12. rbegin() and rend()
    cout << "Reverse vector: ";
    for (auto it = v.rbegin(); it != v.rend(); ++it)
        cout << *it << " ";
    cout << endl;

    // 13. swap()
    vector<int> v2 = {5, 6};
    v.swap(v2);
    cout << "After swap, v: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 14. clear()
    v.clear();
    cout << "After clear, size of v: " << v.size() << endl;

    return 0;
} 
