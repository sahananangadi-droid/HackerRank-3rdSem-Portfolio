/* Problem: Time Conversion (HackerRank)
   Link: https://www.hackerrank.com/challenges/time-conversion/problem
   Time: O(1)   Space: O(1)
   Idea: only the hour changes. 12 AM -> 00, PM (not 12) -> hour + 12. */

#include <stdio.h>
#include <stdlib.h>

char *timeConversion(char *s)
{
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    char period = s[8];

    if (period == 'A' && hour == 12)
        hour = 0;
    else if (period == 'P' && hour != 12)
        hour += 12;

    char *result = malloc(9 * sizeof(char));
    sprintf(result, "%02d%.6s", hour, s + 2);
    return result;
}