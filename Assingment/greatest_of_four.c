#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    int var1, var2;
  if(a>b)
  {
      var1=a;
  }
  else
  {
      var1=b;
  }

  if(c>d)
  {
      var2=c;
  }
  else
  {
      var2=d;
  }
  if(var1>var2)
  {
      return var1;
  }
  else
  {
      return var2;
  }
}