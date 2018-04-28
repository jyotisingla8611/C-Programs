#include <stdio.h>
    int main()
    {
        char ch[50],chr[]="hello ";
        gets(ch);
        strcat(chr , ch);
        puts(chr);
        //puts(ch);
        return 0;
    }
