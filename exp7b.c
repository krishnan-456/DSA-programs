
#include <stdio.h>
int main()
{
  int array[45];
  int i, j, position, temp,size;
  printf("Enter the no of elements:");
  scanf("%d",&size);
  printf("Enter the array elements:");
  for(i=0;i<size;i++)
{
    scanf("%d",&array[i]);
}
  for (i = 0; i < (size- 1); i++)
  {
    position = i;

    for (j = i + 1; j < size; j++)
    {
      if (array[position] > array[j])
        position = j;
    }
    if (position != i)
    {
      temp = array[i];
      array[i] = array[position];
      array[position] = temp;
    }
  }

printf("the sorted arrays is:\n");
for(i=0;i<size;i++)
{printf("%d\n",array[i]);}

}

