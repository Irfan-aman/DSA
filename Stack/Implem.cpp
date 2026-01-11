#include <iostream>
#include <vector>
#include <list>
using namespace std;
// Stack using vector
template <class T>
// class Stack
// {
//     vector<T> v;

// public:
//     void push(T val)
//     {
//         v.push_back(val);
//     }
//     void pop()
//     {
//         v.pop_back();
//     }
//     T top()
//     {
//         int lastIdx = v.size() - 1;
//         return v[lastIdx];
//     }
//     bool isEmpty()
//     {
//         return v.size() == 0;
//     }
// };

// Stack using linked list
class Stack
{
public:
    list<T> l1;
    void push(T val)
    {
        l1.push_front(val);
    }
    void pop()
    {
        l1.pop_front();
    }
    T top()
    {
        return l1.front();
    }
    bool isEmpty()
    {
        return l1.size() == 0;
    }
};
int main()
{
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    while (!s.isEmpty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}