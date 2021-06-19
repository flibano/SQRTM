# SQRTM

## Foreword
The original code (v0.c) was taken from: 
	https://www.seehuhn.de/pages/matrixfn.html
The above URL also contains very relevant documentation and specific code constraints.
Additionally, MathWorks' reference page is useful:
	https://www.mathworks.com/help/matlab/ref/sqrtm.html
*Current compilation flow considers Fabiano's local environment on Mac OS*

## Requirements
LAPACK (http://www.netlib.org/lapack/)
BLAS (http://www.netlib.org/blas/)

## Files
-Principal
	- sqrtm.c: Main implementation file, better written than v0.c
	- lib.h: Header for a handy library
	- lib.c: Implementation for a handy library
	- Makefile
-Auxiliar
	- sqrtm.py: Python script that can be used for validation purposes, using SciPy's sqrtm (https://docs.scipy.org/doc/scipy/reference/generated/scipy.linalg.sqrtm.html)
-Original
	- v0.c: Original implementation file, downloaded from https://www.seehuhn.de/pages/matrixfn.html
	- v0_Makefile 

## TODO
-Install LAPACK on spade
-Install BLAS on spade
-Adapt the compilation flow for spade
-Further validate the implementation at corner cases
