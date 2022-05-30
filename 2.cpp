#include <iostream>
#include <windows.h>


DWORD WINAPI MyThread(void* p)
{
    int loop = (int)p;
    for(int i = 0; i < loop; ++i)
    {
        std::cout << i;
        Sleep(1);
    }
    return 0;
}  

int main(int argc, char * argv[])
{
    int loop = 7;
    CreateThread(0, 4096, MyThread,(void*)loop, 0, NULL);
    for(int i = 0; i < 20; ++i)
    {
        std::cout << '-';
        Sleep(1);
    }
}