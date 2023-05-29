#include <stdio.h>

int main()
{
    int ele, i,flag=0;
    int a[7] = {10, 20, 30, 40, 50, 70, 60};
    printf("Enter the value of the element: ");
    scanf("%d", &ele);
    for (i = 0; i < 7; i++)
    {
        if (ele == a[i])
        {
           flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d element found at %d index position",ele,i);
    }
    else{
        printf("Element was not found");
    }
    return 0;
}