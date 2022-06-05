/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced strings. Take m and n as the start and ending position
for slice.
*/
#include<stdio.h>
#include<string.h>

void slice(char *st, int m, int n);

int main()
{
    char st[21]= "Manash_Roy";
    slice(st,0,3);
    printf("%s",st);
    return 0;
}

void slice(char *st, int m, int n)
{
    {
    int i=0;
    while((i+m)<n)
    {
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
    }
}