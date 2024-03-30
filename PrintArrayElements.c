//Write a C or C++ program to print an array of five fruits
#include<stdio.h>
#include<string.h>

int main()
{
    char names [5][10] = {"Apple", "Banana", "Orange", "Mango", "Graps"};
    int i;
    for(i =0; i<5; i++)
    {

        printf("%s\n", names[i]);
    }
    return 0;
}
