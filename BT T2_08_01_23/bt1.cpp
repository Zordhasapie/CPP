#include <iostream>
#include <string>
using namespace std;

#define OUT 0
#define IN 1

unsigned countWords(string str) // theo mặc định thì unsigned sẽ được hiểu là int nhưng ko có dấu
{
    int state = OUT;
    unsigned wc = 0; // số từ

    // kiểm tra từng kí tự trong chuỗi
    for (char ch : str)
    {
        // nếu kí tự là phân cách từ (dấu cách, kết thúc dòng, tab)
        // đặt trạng thái là ở ngoài từ (OUT)
        if (ch == ' ' || ch == '\n' || ch == '\t')
            state = OUT;

        // nếu kí tự KHÔNG là phân cách từ
        // và trạng thái hiện tại là OUT (ngoài từ), đặt lại trạng thái là IN(đang trong một từ)
        // thỏa mãn cả 2 điều kiện trên tức là ta đang gặp 1 từ mới chưa đc đếm, nên tăng số lượng từ đang có thêm 1
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
    }

    return wc;
}

void showAllWords(string str)
{
    int state = OUT;
    for (char ch : str)
    {
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            if (state == IN)
                cout << endl;
            state = OUT;
        }
        else
        {
            cout << ch;
            if (state == OUT)
            {
                state = IN;
            }
        }
    }
}

int main()
{
    string str;
    cout << "nhập chuỗi: ";
    getline(cin, str);
    int word = countWords(str);
    cout << "Số từ đã đếm được: " << word << endl;
    showAllWords(str);

    return 0;
}