import numpy as np
import mpmath as mp
import scipy 
import matplotlib.pyplot as plt
simlen = 1000000
randvar=np.loadtxt('5.2.dat',dtype='double')
x = range(simlen)
plt.scatter(x,randvar)
plt.grid() 
plt.xlabel('numbers')
plt.ylabel('Y')
plt.show()
