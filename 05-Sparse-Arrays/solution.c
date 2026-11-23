/* Problem: Sparse Arrays (HackerRank)
   Link: https://www.hackerrank.com/challenges/sparse-arrays/problem
   Time: O(N + Q)   Space: O(N + Q)
   Idea: count every string once in a hash table (chaining),
         then answer each query with one lookup. */

#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 2003

typedef struct Node
{
    char *word;
    int count;
    struct Node *next;
} Node;

unsigned long hashString(const char *s)
{
    unsigned long h = 5381;
    while (*s)
    {
        h = h * 33 + (unsigned char)*s;
        s++;
    }
    return h % TABLE_SIZE;
}

int *matchingStrings(int strings_count, char **strings, int queries_count, char **queries, int *result_count)
{
    Node **table = calloc(TABLE_SIZE, sizeof(Node *));

    for (int i = 0; i < strings_count; i++)
    {
        unsigned long h = hashString(strings[i]);
        Node *cur = table[h];
        while (cur != NULL && strcmp(cur->word, strings[i]) != 0)
            cur = cur->next;

        if (cur != NULL)
        {
            cur->count++;
        }
        else
        {
            Node *node = malloc(sizeof(Node));
            node->word = strings[i];
            node->count = 1;
            node->next = table[h];
            table[h] = node;
        }
    }

    int *result = malloc(queries_count * sizeof(int));
    for (int q = 0; q < queries_count; q++)
    {
        unsigned long h = hashString(queries[q]);
        Node *cur = table[h];
        while (cur != NULL && strcmp(cur->word, queries[q]) != 0)
            cur = cur->next;
        result[q] = (cur != NULL) ? cur->count : 0;
    }

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        Node *cur = table[i];
        while (cur != NULL)
        {
            Node *next = cur->next;
            free(cur);
            cur = next;
        }
    }
    free(table);

    *result_count = queries_count;
    return result;
}