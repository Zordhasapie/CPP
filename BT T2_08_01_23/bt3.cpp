#include <iostream>
#include <cstring>
using namespace std;

int WordOccurrence(string str, string word)
{
    int slen = str.length();
    int wordlen = word.length();
    int count = 0;
    int i, j;
    for (i = 0; i < slen; i++)
    {
        for (j = 0; j < wordlen; j++)
        {
            if (str[i + j] != word[j])
                break;
        }
        if (j == wordlen)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str, word;
    cout << "nhập chuỗi: ";
    getline(cin, str);
    cout << "nhập từ cần đếm: ";
    getline(cin, word);

    cout << "số lần xuất hiện của từ " << word << " : " << WordOccurrence(str, word);
    return 0;
}