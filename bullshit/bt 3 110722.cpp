#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,n,d;
    int s=0;
    cout << "nhap n: ";
    cin >> n;

    for (i=0; i<n; i++){
        cout<<"nhap phan tu thu "<<i+1<<": ";
        cin>>d;
        if (d%2!=0){
            s = s+d;
        }
    }
    cout<<"tong cac so le ban vua nhap: "<<s;
    return 0;
}
