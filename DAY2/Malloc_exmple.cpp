#include<stdio.h>
#include "Header.h"
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	//declaration of double pointer
    char** ptr;
    int rows;
	//allocating runtime memory for mystring
    char* mystring =(char*)malloc(80);

    printf("enter the number of string you want\n");
    scanf("%d", &rows);
	//allocate memory for array of pointer 
    ptr = (char**)malloc(sizeof(char*)*rows);
	
	//allocate memory for each element and store the address into array  of pointers  
    for(int i = 0; i < rows; ++i)
    {
        printf("enter the string\n");
        scanf("%s", mystring);
        *(ptr + i) = (char*)malloc(sizeof(char) * strlen(mystring) + 1);
        strcpy(ptr[i],mystring);
    }
    free(mystring);
  
     //swapping the one string from another string   
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            if (strcmp(mystring, ptr[i]) > 0)
            {
                mystring = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = mystring;
            }
        }
    }
 
    printf("entered strings are\n");
    for (int i = 0; i < rows; ++i)
        printf(" % s", *(ptr+i));

    for (int i = 0; i < rows; i++)
    {
        free(ptr);
        ptr = NULL;
    }
    free(ptr);
    ptr = NULL;
	mystring = NULL;
        
	return 0;
}

