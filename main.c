#include <stdio.h>
#include <windows.h>
#include <fcntl.h>
#include <io.h>

int main(void)
{
    SetConsoleOutputCP(65001);
    _setmode(_fileno(stdout), _O_U8TEXT);

    wprintf(L"PC Hospitalへようこそ！\n");

    return 0;
}