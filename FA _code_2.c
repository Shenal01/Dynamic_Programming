#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, m, i, j;
    char** grid;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

// allocating memory for grid
    grid = (char**)malloc(n * sizeof(char*));
    for(i = 0; i < n; i++)
        grid[i] = (char*)malloc(m * sizeof(char));
    
    printf("Enter values for rows and columns: \n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf(" %c", &grid[i][j]);
    
    int** row = (int**)malloc(n * sizeof(int*));
    int** col = (int**)malloc(n * sizeof(int*));

// allocating memory for rows and columns
    for(i = 0; i < n; i++)
    {
        row[i] = (int*)malloc(m * sizeof(int));
        col[i] = (int*)malloc(m * sizeof(int));
        memset(row[i], -1, m * sizeof(int));
        memset(col[i], -1, m * sizeof(int));
    }

// assign values for rows
    for(i = 0; i < n; i++)
    {
        int prev;
        if(grid[i][0] == '0')
            prev = 0;
        else
            prev = -1;

        for(j = 1; j < m; j++)
        {
            row[i][j] = prev;

            if(grid[i][j] == '0')
                prev = j;
        }

    }

// assign values for columns
    for(j = 0; j < m; j++)
    {
        int prev;

        if(grid[0][j] == '0')
            prev = 0;
        else
            prev = -1;

        for(i = 1; i < n; i++)
        {
            col[i][j] = prev;

            if(grid[i][j] == '0')
                prev = i;
        }
        
    }

// allocating memoory
    int **dp = (int**)malloc(n * sizeof(int*));
    
    for(i = 0; i < n; i++)
        dp[i] = (int*)malloc(m * sizeof(int));

    if(grid[0][0] == '1')
    {
        printf("0\n");
        return 0;
    }

    dp[0][0] = 1;

// need to check every statement.
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if((i == 0 && j == 0) || (grid[i][j] == '1'))
                continue;

            if(i == 0 && row[i][j] != -1)
                dp[i][j] = dp[i][row[i][j]];

            if(j == 0 && col[i][j] != -1)
                dp[i][j] = dp[col[i][j]][j];

            int x = 0, y = 0;

            if(row[i][j] != -1)
                x = dp[i][row[i][j]];

            if(col[i][j] != -1)
                y = dp[col[i][j]][j];

            dp[i][j] = x + y;
        }
    }

    printf("Number of ways: %d\n", dp[n-1][m-1]);

    // Deallocate memory 
    for(i = 0; i < n; i++) {
        free(dp[i]);
    }
    free(dp);

    for(i = 0; i < n; i++) {
        free(col[i]);
    }
    free(col);

    for(i = 0; i < n; i++) {
        free(row[i]);
    }
    free(row);

    for(i = 0; i < n; i++) {
        free(grid[i]);
    }
    free(grid);


    return 0;
}