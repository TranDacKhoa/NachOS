#include "syscall.h"
int main()
{
    char name[256];
    int file_id1;
    int file_id2;
    int res;
    char buffer[100];
    PrintString("Nhập tên file nguồn: \n");
    ReadString(name, 255);
    file_id1 = Open(name, 0);
    if (file_id1 == -1)
    {
        PrintString("không tồn tại file: \n");
    }

    PrintString("Nhập tên file đích: \n");
    ReadString(name, 255);
    file_id2 = Open(name, 0);
    if (file_id2 == -1)
    {
        PrintString("không tồn tại file: \n");
    }
    else
    {
        res = Read(buffer, 50, file_id2);
    }
    Seek(-1,file_id1);
    Write(buffer,50,file_id1);
    Close(file_id2);
     Close(file_id1);
    // PrintNum(res);
    Halt();
};