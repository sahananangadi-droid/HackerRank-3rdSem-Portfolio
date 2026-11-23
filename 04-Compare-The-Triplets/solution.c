/* Problem: Compare the Triplets (HackerRank)
   Link: https://www.hackerrank.com/challenges/compare-the-triplets/problem
   Time: O(1)   Space: O(1)
   Idea: compare a[i] and b[i] for each of 3 positions, give a point to the winner. */

#include <stdlib.h>

int *compareTriplets(int a_count, int *a, int b_count, int *b, int *result_count)
{
    int *result = malloc(2 * sizeof(int));
    result[0] = 0;
    result[1] = 0;

    for (int i = 0; i < a_count; i++)
    {
        if (a[i] > b[i])
            result[0]++;
        else if (b[i] > a[i])
            result[1]++;
    }

    *result_count = 2;
    return result;
}