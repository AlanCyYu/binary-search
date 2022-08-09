#include "binary_search.h"

#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t array[] = { 15646 , 27387, 35945, 41387, 51645 };
    int32_t target;
    int16_t arrSize = sizeof(array)/sizeof(array[0]);
    
    printf("Enter Your Target:\n");
	scanf("%d", &target);
	printf("Index %d\n", BinarySearch(array, arrSize, target));
}

