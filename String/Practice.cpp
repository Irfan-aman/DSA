#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    // char ch[10];
    // cout<<"Enter a string: ";
    // cin.getline(ch,10,'.');
    // for(int i=0;i<strlen(ch);i++){
    //     cout<<ch[i]<<" ";
    // }
    // char str1[20] = "Hello";
    // char str2[20] = "World";
    // cout << strlen(str1) << endl;
    // cout << strcmp(str1, str2) << endl;
    // cout << strcat(str1, str2) << endl;
    // cout << str1 << " " << str2 << endl;
    // cout << strncmp(str1, str2, 3) << endl;
    // cout << strncat(str1, str2, 4) << endl;

    string str = "Hello World";
    // cout << "Enter a string: ";
    // getline(cin, str, '&');
    // for (auto ch : str)
    // {
    //     cout << ch << " ";
    // }
    cout << str.length() << endl;
    cout << str.substr(1, 3) << endl; // str.substr(pos,len)
    cout << str.find("or") << endl;
    str.append(5, '#');
    cout << str << endl;
    str.erase(5, 6);
    cout << str << endl;

    return 0;
}