'''
From arguments, generate and write two multiplicable matrices.

$ python3 n r m (max)

n       integer     number of rows of the first matrix
r       integer     number of columns of the first matrix, and rows of the second
m       integer     number of columns of the second matrix
max     integer     upper bound for the matrix elements. If not given, assumed 10.

'''
import sys
import os
import numpy as np
n=int(sys.argv[1])
r=int(sys.argv[2])
m=int(sys.argv[3])
if len(sys.argv)==5:
    upper=int(sys.argv[4])
else:
    upper=10
A=np.random.randint(-upper,upper+1,size=(n,r),dtype=int)
B=np.random.randint(-upper,upper+1,size=(r,m),dtype=int)

np.savetxt("A.dat",A,fmt="%d")
np.savetxt("B.dat",B,fmt="%d")

def pre_write(filename,s):
    '''
    On a very inefficient way, appends the string "s" to the beginning of a file of path "filename".
    '''
    with open(filename,'r') as original:
        with open('temp.txt','w') as provisional:
            provisional.write(s)
            provisional.write(original.read())
    os.rename('temp.txt',filename)

pre_write("A.dat","{} {}\n".format(n,r))
pre_write("B.dat","{} {}\n".format(r,m))
