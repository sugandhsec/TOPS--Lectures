#include<stdio.h>

int main()
{
    int i,count = 1;
    char s[20] = "tops technologies";
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            count++;
        }
        // count++;
    }
    // printf("The length of a string is %d",count);
    // printf("Total number of letters in a string is %d",count);
    printf("Total number of words in a string is %d",count);
return 0;
}

