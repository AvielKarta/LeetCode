#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "implementaions.h"


int* buildArray(int* nums, int numsSize, int* returnSize) {

    int* permuted_array = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        permuted_array[i] = nums[nums[i]];
    }
    *returnSize = numsSize;
    return permuted_array;
}

int countConsistentStrings(char* allowed, char** words, int wordsSize) {
    int cnt = 0;
    for (int i = 0; i < wordsSize; i++)
    {
        int is_valid = 1;
        for (int j = 0; j < strlen(words[i]); j++)
        {
            if ( strchr(allowed, words[i][j]) == NULL)
            {
                is_valid = 0;
                break;
            }
        }
        if (is_valid)
        {
            cnt++;
        }
    }
    return cnt;
}