#include <stdio.h>

int main()
{
    char *arr;
    int length=0;
    printf("Enter a string: ");
    scanf("%s",arr);
    while(*(arr+length)!='\0')
    {
        length = length + 1;
    }
    printf("length of string '%s' is : %d",arr,length);

    return 0;
}
