// Modified from: https://www.seehuhn.de/pages/matrixfn.html
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <lapack.h>
#include <cblas.h>

#include "lib.h"

static const int N = 7;



int main()
{
  // allocate an input matrix
  double A[N][N];
  // initialize with a pattern
  initInputMatrix(N, A);
  printMatrix(N, A);

  // allocate space for the output parameters and workspace arrays
  double ABSTOL = LAPACK_dlamch("S");
  double W[N]; double Z[N][N]; int ISUPPZ[2*N];
  double WORK[26*N]; int LWORK=26*N; int IWORK[10*N]; int LIWORK=10*N; int M; int INFO;
  // calculate the eigenvalues(W) and eigenvectors(Z)
  LAPACK_dsyevr("V", "A", "L", &N, (double *)A, &N, 0, 0, 0, 0, &ABSTOL, &M,
          W, (double *)Z, &N, ISUPPZ, WORK, &LWORK, IWORK, &LIWORK, &INFO);

  // allocate a new matrix F
  double F[N][N];
  // calculate Z*D'
  for(int j=0; j<N; j++) {
    double lambda=sqrt(W[j]);
    for(int i=0; i<N; i++) {
      F[j][i] = Z[j][i]*lambda;
    }
  }

  // calculate the square root A'=F*Z^T
  cblas_dgemm(CblasColMajor, CblasNoTrans, CblasTrans, N, N, N,
              1, (double *)F, N, (double *)Z, N, 0, (double *)A, N);
  printMatrix(N, A);

  // check the result by calculating A'*A'
  cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, N, N, N,
              1, (double *)A, N, (double *)A, N, 0, (double *)Z, N);
  printMatrix(N, Z);

  return 0;
}
