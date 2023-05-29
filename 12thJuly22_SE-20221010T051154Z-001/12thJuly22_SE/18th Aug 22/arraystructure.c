#include<stdio.h>

struct Emp{
    int id;
    char name[20];
};

int main()
{
    int i;
    struct Emp e[3];
    for(i=0;i<3;i++){
        printf("Enter the id of emp number %d: ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter the name of emp number %d: ",i+1);
        scanf("%s",&e[i].name);
    }
    printf("\n\n-------------All data of the structure is----------------\n");
    for(i=0;i<3;i++){
        printf("%d %s \n",e[i].id,e[i].name);
    }
    return 0;
}