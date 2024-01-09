#include<stdio.h>
int main()
{
    char text;
    int count=0;
    while (scanf("%c",&text)!=EOF)
    {
        if(text=='"')
        {
            count++;
            if(count%2==1)
            {
                printf("``");
            }
            else if(count%2==0)
            {
                printf("''");
            }
        }
        else
        {
            printf("%c",text);
        }
    }
    return 0;
}