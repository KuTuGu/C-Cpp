#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"zh_CN");
    wchar_t a = L'你';
    wchar_t b = L'好';
    putwchar(a);
    putwchar(b);
    printf("\n");
    wprintf(L"%lc%lc",a,b);
    return 0;
}
