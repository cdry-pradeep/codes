#include<stdio.h>
int main()
{
  char str[80], substr[10];
  int count1 = 0, count2 = 0, i, j, flag;
  printf("Enter a string: ");
  scanf("%s", str);
  printf("Enter a substring to search: ");
  scanf("%s", substr);
  while (str[count1] != '\0')
    count1++;
  while (substr[count2] != '\0')
    count2++;
  for (i = 0; i <= count1 - count2; i++)
  {
    for (j = i; j < i + count2; j++)
    {
      flag = 1;
      if (str[j] != substr[j - i])
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    break;
  }
  if (flag == 1)
    printf("Substring is found in the entered string");
  else
    printf("Substring is not found in the entered string");

  return 0;
}
