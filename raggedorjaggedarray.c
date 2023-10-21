#include<stdio.h>
int main()
{
    int i,j;
    char * s1[5]={
        "Github",
        "Zaid",
        "Khan",
        "Hi",
        "Yo"
    };
    //Prints the individual element of the every string created in the s1 array
        for ( i = 0; i < 5; i++)
        {
            printf("%c\n",s1[i][0]);
        }
    printf("\n");
    //print the first srting of the s1 array
    for ( j = 0; j < 5; j++)
        {
            printf("%s\n",s1[j]);
        }
    //this way we dont waste space in the array by initially declaring the number of elements we want to have
    //In this way most of the sapce is occupied by the pointers itself
    return 0;
}