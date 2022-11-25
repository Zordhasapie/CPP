#include <stdio.h>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{   
    int i, j, n;
    printf("nhap n: ");
    scanf("%d", &n);
    string str = to_string(n);
    i=0; j=str.length()-1;
    while (i<j){
        if (str[i]!=str[j]) break;
        i++;j--;
    }
    if (i>=j){
        printf("%d la so doi xung",n);
    }else{
        printf("%d ko la so doi xung",n);
    }
    return 0;
}
