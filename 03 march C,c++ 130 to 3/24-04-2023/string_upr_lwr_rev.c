#include <stdio.h>
int main()
{
    char sent[50] = "vfhgberj zjnhgbjkgbvf JBFJKHEBJKH";
    // strupr(sent); //converts whole string in upper case
    // strlwr(sent); // converts whole string in lower case
    strrev(sent); //reverse the whole string
    printf("%s", sent);

    return 0;
}