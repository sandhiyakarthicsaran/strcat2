#include<stdio.h>
int main()
{
char str1[12],str2[34];
printf("\nEnter the first string",str1);
scanf("%s",&str1);
printf("\nEnter the second string",str2);
scanf("%s",&str2);
strcat(str1,str2);
printf("%s",str1);
return 0;
}
