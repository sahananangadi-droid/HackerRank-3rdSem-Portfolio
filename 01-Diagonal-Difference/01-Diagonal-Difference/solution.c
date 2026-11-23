/* Problem: Diagonal Difference (HackerRank)
   Link: https://www.hackerrank.com/challenges/diagonal-difference/problem
   Time: O(N)   Space: O(1) */

int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{
    int n = arr_rows;
    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++)
    {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }

    int diff = primary - secondary;
    if (diff < 0)
        diff = -diff;
    return diff;
}