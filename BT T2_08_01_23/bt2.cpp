#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isWhitespace(unsigned char c)
{
    return c == ' ' || c == '\t' || c == '\n';
}

int main()
{
    string str;
    cout << "nhập chuỗi: ";
    getline(cin, str);

    str.erase(remove_if(str.begin(), str.end(), isWhitespace), str.end());

    cout << str << endl;
    return 0;
}