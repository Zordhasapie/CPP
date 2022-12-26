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

void show_sinhvien(sinhvien sv)
{
    cout << setw(5) << sv.ID << setw(20) << sv.Name << setw(16) << sv.toan << setw(16) << sv.tin << setw(16) << sv.tong << endl;
}

int index_of(char id[16], sinhvien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // char temp_id[16] = sv[i].ID;
        // cout << id << " " << i << " " << sv[i].ID << endl;
        if (strcmp(sv[i].ID, id) == 0)
        {
            // cout << "";
            return i;
        }
        // return i;
    }
    return -1;
}

sinhvien set_sinhvien()
{
    sinhvien sv;
    // cout << "nhập id: ";
    // gets(sv.ID);
    // do
    // {
    cout << "nhập id: ";
    gets(sv.ID);
    //     if (index_of(id, sv, n) != -1)
    //         cout << "ID PHẢI LÀ DUY NHẤT!!!" << endl;
    // } while (index_of(id, sv, n) != -1);

    // sv.ID = id ;
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

void make_dssv(sinhvien sv[], int &n)
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
        cout << "=========================================================================" << endl;
        cout << "NHẬP DỮ LIỆU CHO SV THỨ " << i + 1 << endl;
        cout << "----------------------------------------------------------------" << endl;
        sv[i] = set_sinhvien();
    }
}

void show_dssv(sinhvien sv[], int n)
{
    cout << setw(5) << "ID" << setw(20) << "HO TEN" << setw(16) << "DIEM TOAN" << setw(16) << "DIEM TIN" << setw(16) << "DIEM TONG" << endl;
    cout << "=========================================================================" << endl;

    if (n > 0)
        for (int i = 0; i < n; i++)
        {
            show_sinhvien(sv[i]);
        }
    cout << "=========================================================================" << endl;
    cout << setw(73) << "END OF RECORD" << endl;
    cout << "press enter to continue...";
    cin.get();
    // system("pause");
    // fflush(stdin);
}

void sort_by_tong(sinhvien sv[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (sv[j].tong > sv[j + 1].tong)
                swap(sv[j], sv[j + 1]);
}

void delete_by_id(sinhvien sv[], int &n)
{
    char id[16];
    cout << "nhập id cần xóa: ";
    gets(id);
    // cin>>id;
    fflush(stdin);
    // cout << index_of(id, sv, n) << " " << n << endl;
    if (index_of(id, sv, n) != -1 && index_of(id, sv, n) <= n)
    {
        for (int i = index_of(id, sv, n); i < n; i++)
            sv[i] = sv[i + 1];
        n = n - 1;
        cout << "ĐÃ XÓA ID: " << id << endl;
    }
    else
        cout << "KHÔNG TÌM THẤY";
    cout << "press enter to continue...";
    cin.get();
}

void push_to_index_of_id(sinhvien sv[], int n)
{
    // char id[16];
    // cout << "nhập vào id cần chèn dữ liệu mới lên trên, hoặc -1 nếu chèn vào cuối danh sách: ";
    cout << "nhập vị trí cần chèn: ";
    int index;
    cin >> index;
    fflush(stdin);
    index--;
    // int index = index_of(id, sv, n);
    // if (id == "-1")
    //     index = n;
    // show_dssv(sv, n);
    if (index != -1 && index <= n && n < 100)
    {
        for (int i = n - 1; i >= index; i--)
        {
            sv[i + 1] = sv[i];
            show_sinhvien(sv[i]);
            cout << "processing..." << i << endl;
        }
        cout << "NHẬP DỮ LIỆU CHO SV MỚI: " << endl;
        sv[index] = set_sinhvien();
        cout << "ĐÃ THÊM, ĐANG HIỂN THỊ...." << endl;
        n++;
        show_dssv(sv, n);
        return;
    }
    else
        cout << "KHÔNG HỢP LỆ!!" << endl;
    cout << "press enter to continue...";
    cin.get();
    return;
}

void out_15(sinhvien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (sv[i].tong >= 15)
        {
            show_sinhvien(sv[i]);
        }
    }
}

int menu() // menu CT
{
    int choose;
    cout << "mời lựa chọn..." << endl;
    cout << "1: hiển thị danh sách sinh viên hiện có" << endl;
    cout << "2: nhập mới danh sách sinh viên (ghi đè)" << endl;
    cout << "3: sắp xếp và hiển thị danh sách sinh viên hiện có (theo \"tổng điểm\")" << endl;
    cout << "4: xóa sinh viên bằng id" << endl;
    cout << "5: chèn thêm dữ liệu" << endl;
    cout << "6: xem điểm >=15" << endl;
    cout << "7: THOÁT CT" << endl;
    cout << "nhập lựa chọn: ";
    cin >> choose;
    fflush(stdin);
    return choose;
}
// vào hàm chính (main)
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
                show_dssv(sv, n);
            else
            {
                cout << "DANH SÁCH RỖNG" << endl;
                cin.get();
            }
            // cout << "DANH SÁCH RỖNG" << endl;
            break;
        case 2:
            make_dssv(sv, n);
            break;
        case 3:
            sort_by_tong(sv, n);
            show_dssv(sv, n);
            break;
        case 4:
            delete_by_id(sv, n);
            break;
        case 5:
            push_to_index_of_id(sv, n);
            break;
        case 6:
            out_15(sv, n);
            break;
        case 7:
            cout << "GOODBYE!!!!" << endl;
            break;
        default:
            cout << "Vui lòng lựa chọn trong danh sách" << endl;
            break;
        }
    } while (c != 7);
    return 0;
}
