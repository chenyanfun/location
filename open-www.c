#include<stdio.h>
//#include<windows.h>
//#include<shellapi.h>

void main()
{
   char i;
   char j;
   printf("是否获取位置信息,请输入yes or no：");
   i=getchar();
   j=putchar(i);
  // scanf("%s",&i);
   if (strcmp(j,"yes")==0)
      ShellExecute(0,"open","firefox","http://www.baidu.com",NULL,SW_SHOWNORMAL);
   else
      printf("谢谢您的使用");
}
