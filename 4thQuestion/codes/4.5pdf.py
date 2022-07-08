#Importing numpy, scipy, mpmath and pyplot
import numpy as np
import mpmath as mp
import scipy 
import matplotlib.pyplot as plt

def uni3_pdf(x):
  if (0 <= x < 1): return x
  elif (1 <= x < 2): return 2 - x
  else: return 0

arr_func = scipy.vectorize(uni3_pdf, otypes=['double'])
maxrange=60
x = np.linspace(-2,4,maxrange)#points on the x axis -2 is starting point and 4 is ending point and max range is the number of points which we want to plot 

simlen = int(1e6) #number of samples i.e 1000000
err = [] #declaring probability list
pdf = [] #declaring pdf list

randvar = np.loadtxt('uni3.dat',dtype='double')


for i in range(maxrange):
	err_ind = np.nonzero(randvar < x[i]) #checking probability condition
	err_n = np.size(err_ind) #computing the probability
	err.append(err_n/simlen) #storing the probability values in a list
	
for i in range(0,maxrange-1):
	test = (err[i+1]-err[i])/(x[i+1]-x[i])
	pdf.append(test) #storing the pdf values in a list

plt.plot(x[0:(maxrange-1)],pdf,'.')
plt.plot(x,arr_func(x))#plotting the PDF
plt.grid() #creating the grid
plt.xlabel('$x$')
plt.ylabel('$p_T(x)$')
plt.legend(["Simulation","Analysis"])
plt.show() #opening the plot window
