#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string.h>
using namespace std;

struct sinhvien
{
    char ID[16];
    char Name[30];
    float toan, tin, tong;
};

void hien_thi_sv(sinhvien sv)
{
    cout << setw(5) << sv.ID << setw(20) << sv.Name << setw(16) << sv.toan << setw(16) << sv.tin << setw(16) << sv.tong << endl;
}

int vitri(char id[16], sinhvien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {

        if (strcmp(sv[i].ID, id) == 0)
        {

            return i;
        }
    }
    return -1;
}

sinhvien datsv(int id)
{
    sinhvien sv;
    cout << "nhập id: ";
    gets(sv.ID);
    cout << "nhập tên sinh viên: ";
    gets(sv.Name);
    cout << "nhập điểm toán: ";
    cin >> sv.toan;
    cout << "nhập điểm tin: ";
    cin >> sv.tin;
    fflush(stdin);
    sv.tong = sv.toan + sv.tin;
    return sv;
}

void tao_ds_sv(sinhvien sv[], int &n)
{
    do
    {
        cout << "nhập số lượng sinh viên(0<n<101):";
        cin >> n;
        fflush(stdin);
        if (n < 1 || n > 100)
            cout << "số lượng không hợp lệ, nhập lại!!" << endl;
    } while (n < 1 || n > 100);

    for (int i = 0; i < n; i++)
    {
        cout << "NHẬP DỮ LIỆU CHO SV THỨ " << i + 1 << endl;
        sv[i] = datsv(i);
    }
}

void hienthi_ds(sinhvien sv[], int n)
{
    cout << setw(5) << "ID" << setw(20) << "HO TEN" << setw(16) << "DIEM TOAN" << setw(16) << "DIEM TIN" << setw(16) << "DIEM TONG" << endl;

    if (n > 0)
        for (int i = 0; i < n; i++)
        {
            hien_thi_sv(sv[i]);
        }
    cout << "press enter to continue...";
    cin.get();
}

void sap_xep(sinhvien sv[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (sv[j].tong > sv[j + 1].tong)
                swap(sv[j], sv[j + 1]);
}

void hienthi_sv_15(sinhvien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (sv[i].tong >= 15)
        {
            hien_thi_sv(sv[i]);
        }
    }
}

int menu()
{
    int choose;
    cout << " lựa chọn..." << endl;
    cout << "1: hiển thị danh sách sinh viên hiện có" << endl;
    cout << "2: nhập mới danh sách sinh viên" << endl;
    cout << "3: sắp xếp và hiển thị danh sách sinh viên" << endl;
    cout << "4: xem điểm sv >=15" << endl;
    cout << "5: THOÁT CT" << endl;
    cout << "nhập lựa chọn: ";
    cin >> choose;
    fflush(stdin);
    return choose;
}

int main()
{
    sinhvien sv[100];
    int c, n = 0;
    do
    {
        cout << endl;
        c = menu();
        fflush(stdin);

        switch (c)
        {
        case 1:
            if (n > 0)
                hienthi_ds(sv, n);
            else
            {
                cout << "HIỂN THỊ DANH SÁCH RỖNG" << endl;
                cin.get();
            }

            break;
        case 2:
            tao_ds_sv(sv, n);
            break;
        case 3:
            sap_xep(sv, n);
            hienthi_ds(sv, n);
            break;

        case 4:
            hienthi_sv_15(sv, n);
            break;
        case 5:
            cout << "END!!!!" << endl;
            break;
        default:
            cout << "Lựa chọn trong danh sách" << endl;
            break;
        }
    } while (c != 5);
    return 0;
}