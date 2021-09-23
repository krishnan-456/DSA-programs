
#include <stdio.h>
void printarr(int Arr[],int t);
int main() {

    int n,x,y,z,pos,m,o,i ;
    int arr[100];

    do{
    printf("\n");
    printf("1: search based on position\n");
    printf("2: search based on key values\n");
    printf("3: Insertion\n");
    printf("4: Deletion\n");
    printf("5.display\n");
    printf("6.exit\n");
    printf("7.create\n");
    printf("\nEnter your choice:");
    scanf("%d",&y);

    if(y==1)
    {
        if(n!=0){printf("search based on position\n");
        printf("Enter the elemental position :");
        scanf("%d",&m);
        printf("arr[%d]= %d",m ,arr[m-1]);}
        else{printf("the array is empty\n");}
    }
    if(y==2)
    {
        if(n!=0){printf("Travers and search based on key values\n");
        printf("Enter the key value:");
        scanf("%d",&o);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==o)
            {
                printf("%d is in %d position in the array\n ",(o),(i+1));
                break;
            }
        }
    }else{printf("the array is empty");} }
    if(y==3)
    {
        if(n!=0){printf("Insertion\n");
        printf("where to insert element[position]:");
        scanf("%d",&x);
        pos=x-1;
        printf("which element to insert:");
        scanf("%d",&z);
        n++;
        for(int w =n;w>=pos;w--)
        {
            arr[w]=arr[w-1];
        }
        arr[pos]=z;
        printarr(arr,n);}
        else{printf("the array is empty\n");}
    }
    if(y==4)
    {
        printf("Deletion\n");
        printf("Where to delete the element:");
        scanf("%d",&x);
if(n!=0) {
        pos=x-1;
        n--;
        for(int w=pos ;w<=n ; w++)
        {
            arr[w]=arr[w+1];
        }
        printarr(arr,n);}
       else{printf("the element is not found\n");}
    }
    if(y==5)
   {

        if(n!=0){
            for(int i=0;i<n;i++)
      {printf("arr[%d] =%d\n",i+1, arr[i]);} }
      else{printf("the array is empty");}

    }
    if(y==6)
    {
        break;
    }
    if(y==7)
    {
        printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    }
    }while(y!=6);
}
void printarr(int Arr[],int t)
{
    for(int j=0;j<t;j++)
    {
        printf("arr[%d] =%d\n",j+1, Arr[j]);
    }
}
