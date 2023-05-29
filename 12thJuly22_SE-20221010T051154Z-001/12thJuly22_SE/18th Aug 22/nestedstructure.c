#include<stdio.h>
// Nested structure
struct Address
{
    char city[20];
    char state[20];
    char country[20];
};

struct Emp {
    int id;
    char name[30];
    struct Address adr;
};


int main()
{
    struct Emp e1 = {101,"Paresh","Surat","Gujarat","India"};
    printf("%d %s %s %s %s\n",e1.id,e1.name,e1.adr.city,e1.adr.state,e1.adr.country);
    return 0;
}