#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
  int a,b,c,i,d,w=0,j=0,k=0,e;
  char str[100000],str2[100000];
  scanf("%d %d",&a,&b);
  c=a+b;
  if(c==0)
  printf("0");
  if(c>=0)
  {
    w=1;
  }
  c=abs(c);
  for(i=0;c>0;i++)
  {
    str[i]=c%10+'0';
    c=c/10;
  }
  d=strlen(str);
  for(i=0;i<d;i++,k++)
  {
    if(j%3==0&&j!=0)
    {
      str2[k]=',';
      k++;
    }
    str2[k]=str[i];
    j++;
  }
  e=strlen(str2);
  if(w==0)
  printf("-");
  for(i=e-1;i>=0;i--)
  printf("%c",str2[i]);
  return 0;
}
