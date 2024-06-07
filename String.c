#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char s[50];
  int i;
  int ualpha=0,lalpha=0,vow=0,con=0,sp=0,dig=0;
  printf("enter the string:");
  scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(isalpha(s[i]))
    {
      if(isupper(s[i]))
      {
        ualpha++;
      }
      else
      {
        lalpha++;
      }
      if(s[i]=='A'||s [i]=='a'||
      s[i]=='E'||s [i]=='e'||
      s[i]=='I'||s [i]=='i'||
      s[i]=='O'||s [i]=='o'||
      s[i]=='U'||s [i]=='u')
      {
        vow++;
      }
      else
      {
        con++;
      }
    }
    else if(isdigit(s[i]))
    {
      dig++;
    }
    else
    {
      sp++;
    }
  }
  return 0;
}
