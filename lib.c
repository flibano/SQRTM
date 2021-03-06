#include "lib.h"

void initInputMatrix(int N, double m[N][N])
{
  if(N == 2)
  {
    m[0][0]=7;  m[0][1]=10;
    m[1][0]=15; m[1][1]=22;
  }
  else if(N == 5)
  {
    m[0][0]=5;  m[0][1]=-4; m[0][2]=1;  m[0][3]=0;  m[0][4]=0;
    m[1][0]=-4; m[1][1]=6;  m[1][2]=-4; m[1][3]=1;  m[1][4]=0;
    m[2][0]=1;  m[2][1]=-4; m[2][2]=6;  m[2][3]=-4; m[2][4]=1;
    m[3][0]=0;  m[3][1]=1;  m[3][2]=-4; m[3][3]=6;  m[3][4]=-4;
    m[4][0]=0;  m[4][1]=0;  m[4][2]=1;  m[4][3]=-4; m[4][4]=6;
  }
  else if(N == 7)
  {
    m[0][0]=1;  m[0][1]=-1; m[0][2]=0;  m[0][3]=0;  m[0][4]=0;  m[0][5]=0;  m[0][6]=0;
    m[1][0]=-1; m[1][1]=2;  m[1][2]=-1; m[1][3]=0;  m[1][4]=0;  m[1][5]=0;  m[1][6]=0;
    m[2][0]=0;  m[2][1]=-1; m[2][2]=2;  m[2][3]=-1; m[2][4]=0;  m[2][5]=0;  m[2][6]=0;
    m[3][0]=0;  m[3][1]=0;  m[3][2]=-1; m[3][3]=2;  m[3][4]=-1; m[3][5]=0;  m[3][6]=0;
    m[4][0]=0;  m[4][1]=0;  m[4][2]=0;  m[4][3]=-1; m[4][4]=2;  m[4][5]=-1; m[4][6]=0;
    m[5][0]=0;  m[5][1]=0;  m[5][2]=0;  m[5][3]=-0; m[5][4]=-1; m[5][5]=2;  m[5][6]=-1;
    m[6][0]=0;  m[6][1]=0;  m[6][2]=0;  m[6][3]=0;  m[6][4]=0;  m[6][5]=-1; m[6][6]=1;
  }
  else
  {
    for(int i=0; i<N; i++) {
      for(int j=0; j<N; j++) {
        m[i][j] = 0;
      }
    }
  }
}

void printMatrix(int N, double matrix[N][N])
{
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      printf("%6.2f", matrix[i][j]);
    }
    putchar('\n');
  }
  putchar('\n');
}
