#include<stdio.h>
#include<string.h>

int main()
{
    int l1,l2,l3,i;
    char s1[4000] = "Good ";
    char s2[1000] = "Morning ";
    char s3[2000] = "Everyone";
    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);
    for(i=0;i<=l1+l2;i++){
        s1[l1+i] = s2[i];
    }
    printf("After concatination, the string is %s",s1);

    for(i=0;s1[i]!='\0';i++){
        s1[l1+l2+i] = s3[i];
    }
    printf("After concatination, the string is %s",s1);
    return 0;
}