import numpy as np
from scipy.linalg import sqrtm

np.set_printoptions(formatter={'float': lambda x: "{0:0.2f}".format(x)})

a = np.array([[1.0,-1.0,0.0,0.0,0.0,0.0,0.0],\
			 [-1.0,2.0,-1.0,0.0,0.0,0.0,0.0],\
			 [0.0,-1.0,2.0,-1.0,0.0,0.0,0.0],\
			 [0.0,0.0,-1.0,2.0,-1.0,0.0,0.0],\
			 [0.0,0.0,0.0,-1.0,2.0,-1.0,0.0],\
			 [0.0,0.0,0.0,0.0,-1.0,2.0,-1.0],\
			 [0.0,0.0,0.0,0.0,0.0,-1.0,1.0]])

z = sqrtm(a)

print(a)
print(z.real)
print(np.dot(z.real,z.real))