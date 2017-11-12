#include <stdio.h>
#define N 10

typedef int t_matrix[N][N];
t_matrix g_mtrx;

void swap_d(t_matrix *i_mtrx)
 {  int i;
    int t;
    for(i=0; i<N; i++)
      {
         t = (*i_mtrx)[i][N-i-1];
             (*i_mtrx)[i][N-i-1] = (*i_mtrx)[i][i];
             (*i_mtrx)[i][i] = t;
       }
    return;
}

int main()
{
    int i;
//Filling digonals
    for(i=0; i<N; i++) {
        g_mtrx[i][i] = i + 1;
        g_mtrx[i][N-i-1] = N - i;
    }
    swap_d(&g_mtrx);
    
    
    return 0;
}
