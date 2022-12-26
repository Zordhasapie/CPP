// gọi thư viện
#include <iostream>
using namespace std;
// xây dựng struct
struct product // struct product (mặt hàng)
{
    // khai báo thành phần của product
    char ID[16];                    // mã hàng
    char Name[30];                  // tên mặt hàng
    int quantity;                   // số lượng
    int price;                      // đơn giá
    int to_cash = quantity * price; // thành tiền
};

// xây dựng hàm chức năng
void show_product(product p) // hiển thị mặt hàng
{
    cout<<"\t"<<p.ID<<"\t"<<p.Name<<"\t"<<p.quantity<<"\t"<<p.price<<"\t"<<p.to_cash<<endl;
}

product set_product(product p) // nhập liệu mặt hàng
{
    cout<<"nhập id";
    
    cout<<"nhập tên mặt hàng";
    return p;
}

void make_array(product p[], int &n) // tạo mảng
{
}

void show_array(product p[], int n) // hiển thị mảng
{
}

void sort_by_cash(product p[], int n) // sắp xếp theo thành tiền
{
}

void delete_by_id(product p[], int n) // xóa theo id
{
}

int menu() // menu CT
{
    int choose;
    cout << "mời lựa chọn..." << endl;
    cout << "1: hiển thị danh sách mặt hàng hiện có" << endl;
    cout << "2: nhập mới danh sách mặt hàng (ghi đè)" << endl;
    cout << "3: sắp xếp và hiển thị danh sách mặt hàng hiện có (theo \"thành tiền\")" << endl;
    cout << "4: xóa mặt hàng bằng id" << endl;
    cout << "5: THOÁT CT" << endl;
    cout << "Nhập lựa chọn: ";
    cin >> choose;
    return choose;
}
// vào hàm chính (main)
int main()
{
    product p[100];
    int n, c;
    do
    {
        cout << endl;
        c = menu();
        fflush(stdin);

        switch (c)
        {
        case 1:
            show_array(p, n);
            break;
        case 2:
            make_array(p, n);
            break;
        case 3:
            sort_by_cash(p, n);
            break;
        case 4:
            delete_by_id(p, n);
            break;
        case 5:
            cout << "GOODBYE!!!!" << endl;
            break;
        default:
            cout << "Vui lòng lựa chọn trong danh sách"<< endl;
            break;
        }
    } while (c != 5);
    return 0;
}
