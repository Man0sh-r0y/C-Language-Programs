/*You have to print the character,'ch' , in the first line. 
Then print 's' in next line. In the last line print the sentence,'sen'.
First, take a character,'ch' as input.
Then take the string, 's' as input.
Lastly, take the sentence 'sen' as input.*/
#include<stdio.h>
#include<string.h>

int main()
{
    char ch, s[20], sen[30];
    scanf("%c", &ch);
    scanf("\n");
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);

    return 0;
}
