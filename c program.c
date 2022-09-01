#include<stdio.h>
#include <ctype.h>
#include<string.h>
int main() 
{
    char str[100];
    int length = 0;
    printf("Enter the string: ");
    scanf("%s",&str);
    length = strlen(str);
    for(int i=0;i<length;i++)
    {
    if(i==0||i==(length-1))
    {
    str[i]=toupper(str[i]);
    }
    else if(str[i]==' ')
    {
    str[i-1]=toupper(str[i-1]);
    str[i+1]=toupper(str[i+1]);
    }
  }
  printf("\n%s", str);
  return 0;
}
