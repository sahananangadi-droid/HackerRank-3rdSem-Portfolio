/* Problem: Dynamic Array (HackerRank)
   Link: https://www.hackerrank.com/challenges/dynamic-array/problem
   Time: O(N + Q)   Space: O(N + Q)
   Idea: n buckets, each a growable int array (realloc with doubling).
         idx = (x ^ lastAnswer) % n */

#include <stdlib.h>

int *dynamicArray(int n, int queries_rows, int queries_columns, int **queries, int *result_count)
{
    int **arr = malloc(n * sizeof(int *)); /* n drawers (addresses) */
    int *size = calloc(n, sizeof(int));    /* items in each drawer, all start at 0 */
    int *cap = calloc(n, sizeof(int));     /* room in each drawer, all start at 0 */
    for (int i = 0; i < n; i++)
        arr[i] = NULL; /* NULL means "no list yet" */

    int *answers = malloc(queries_rows * sizeof(int)); /* results to return */
    int count = 0;                                     /* how many answers so far */
    int lastAnswer = 0;                                /* the sticky note */

    for (int q = 0; q < queries_rows; q++)
    {
        int type = queries[q][0];
        int x = queries[q][1];
        int y = queries[q][2];
        int idx = (x ^ lastAnswer) % n; /* which drawer */

        if (type == 1)
        {
            if (size[idx] == cap[idx])
            { /* drawer is full: grow it */
                cap[idx] = (cap[idx] == 0) ? 2 : cap[idx] * 2;
                arr[idx] = realloc(arr[idx], cap[idx] * sizeof(int));
            }
            arr[idx][size[idx]] = y; /* put y at the end */
            size[idx]++;
        }
        else
        {
            lastAnswer = arr[idx][y % size[idx]];
            answers[count++] = lastAnswer; /* save the answer */
        }
    }

    for (int i = 0; i < n; i++)
        free(arr[i]); /* give memory back */
    free(arr);
    free(size);
    free(cap);

    *result_count = count; /* tell HackerRank how many answers */
    return answers;
}