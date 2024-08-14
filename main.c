#include "stdio.h"
#include "stdarg.h"



#define tong(...) sum(__VA_ARGS__,0) 

int sum(int count,...)
{
 
    va_list va;
    int value;
    int sum = count;
    va_start(va,count);
    while( (value = va_arg(va,int)) != 0 )
    {
        sum += value;
    }
    va_end(va);
    return sum;

}

int main(int argc, char const *argv[])
{
    
    printf("tong:%d\n",tong(1,2,3,4,11,10));
    return 0;
}
