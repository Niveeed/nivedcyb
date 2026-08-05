#include <stdio.h>  
 int main()
 {
      int a[100][3], b[100][3], c[100][3];
      int i, j, m = 1, n = 1, k = 1;
      printf("Enter rows, columns and number of non-zero elements of Matrix A: ");
      scanf("%d%d%d", &a[0][0], &a[0][1], &a[0][2]);
      printf("Enter rows, columns and number of non-zero elements of Matrix B: "); 
      scanf("%d%d%d", &b[0][0], &b[0][1], &b[0][2]);
      if (a[0][0] != b[0][0] || a[0][1] != b[0][1])
      {
          printf("Matrix addition not possible.");
          return 0;
      }
      printf("\nEnter tuple elements of Matrix A (row column value):\n");
      for (i = 1; i <= a[0][2]; i++){
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
      }
      printf("\nEnter tuple elements of Matrix B (row column value):\n");
      for (i = 1; i <= b[0][2]; i++)
      {
          scanf("%d%d%d", &b[i][0], &b[i][1], &b[i][2]); 
      }
      while (m <= a[0][2] && n <= b[0][2])
      {
          if (a[m][0] == b[n][0] && a[m][1] == b[n][1])
          {
              int sum = a[m][2] + b[n][2];
              if (sum != 0)
              {
                  c[k][0] = a[m][0];
                  c[k][1] = a[m][1];
                  c[k][2] = sum;
                  k++;
              }
              m++;
              n++;
          }
          else if((a[m][0] < b[n][0]) ||(a[m][0] == b[n][0] && a[m][1] < b[n][1]))
          {
              c[k][0] = a[m][0];
              c[k][1] = a[m][1];
              c[k][2] = a[m][2];
              m++;
              k++;
          }
          else 
          {
              c[k][0] = b[n][0];
              c[k][1] = b[n][1];
              c[k][2] = b[n][2];
              n++;
              k++;
          }
      }
      while (m <= a[0][2]) 
      {
          c[k][0] = a[m][0];
          c[k][1] = a[m][1];
          c[k][2] = a[m][2];
          m++;
          k++;
      }
      while (n <= b[0][2])
      {
            c[k][0] = b[n][0];
            c[k][1] = b[n][1];
            c[k][2] = b[n][2];
            n++;
            k++;
      }
      c[0][0] = a[0][0];
      c[0][1] = a[0][1];
      c[0][2] = k - 1;
      printf("\nResultant Sparse Matrix (Tuple Form):\n");
      printf("Row\tColumn\tValue\n");
      for (i = 0; i <= c[0][2]; i++)
      {
          printf("%d\t%d\t%d\n", c[i][0], c[i][1], c[i][2]);
          
      }
      /* Convert tuple to normal matrix */
      int result[100][100] = {0};
      for(i = 1; i <= c[0][2]; i++)
      {
          result[c[i][0]][c[i][1]] = c[i][2];
          
      }
      printf("\nResultant Matrix:\n");
      for(i = 0; i < c[0][0]; i++)
      {
          for(j = 0; j < c[0][1]; j++)
          {
              printf("%d ", result[i][j]);
              
          }
          printf("\n");
          
      }
 }
