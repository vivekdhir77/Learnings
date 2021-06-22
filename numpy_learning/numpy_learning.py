import numpy as ny
a= ny.array([1,2,3,4], dtype="int8") # or we can use int16, int 32, int 64
b= ny.array([[1,2,3,4,5,6,7],[9,8,7,6,5,4,3]], dtype="int8")

print(a)
print(b)
print()

print(a.ndim) #no of dimentions
print(b.ndim)

print(a.shape)#shape (row, column)
print(b.shape)

print(a.dtype)#data type
print(b.dtype)


print(a.itemsize)#array element size in bytes
print(b.itemsize)


print(a.nbytes)# it gives total array size
print(b.nbytes)
print()

print(a[1])
print(b[1,:])# prints specific row
print(b[:,2])# prints specific column

# getting little fancy
print(b[0, 6:1:-2])# start index : end index : step size

#mutating
b[1,5] = 20 
print(b)
print()
b[:,2]=[1,2] #changes specific column
print(b)
print()

#3d example
b=ny.array([[ [1,2],[4,5] ], [ [6,7],[5,6] ]])
print(b.shape)
print(b[1,0,0])

#initializing different types of arrays
print(ny.zeros((2,3,4, 5)))
print(ny.ones((2,3,4)))

print(ny.full((2,2),99))
print()
print(ny.full_like(b,4))
print()
print(ny.random.rand(2,4))#random decimal numbers
print()
print(ny.random.random_sample(a.shape))

#random integer
print(ny.random.randint(-1, 7,size=(3,3)))

# identity matrix
print(ny.identity(5))

#repeat an array
arr=ny.array([[1,2,3]])
print(ny.repeat(arr, 3, axis=0))

"""question
[[1. 1. 1. 1. 1.]
 [1. 0. 0. 0. 1.]
 [1. 0. 9. 0. 1.]
 [1. 0. 0. 0. 1.]
 [1. 1. 1. 1. 1.]] """


output = ny.ones((5,5))
print(output)

z = ny.zeros((3,3))
z[1,1] = 9
print(z)

output[1:-1,1:-1] = z
print(output)

#linear algebra
a = ny.ones((2,3))
print(a)

b = ny.full((3,2), 2)
print(b)

ny.matmul(a,b) # multiplying matrices

# Find the determinant
c = ny.identity(3)
ny.linalg.det(c)

#statistics
stats = ny.array([[1,2,3],[4,5,6]])

ny.min(stats)
print(ny.max(stats, axis=1))# axis 1 is row
                            #axis 0 is column
before = ny.array([[1,2,3,4],[5,6,7,8]])
print(before)

after = before.reshape((2,2,2))
print(after)

# Vertically stacking vectors
v1 = ny.array([1,2,3,4])
v2 = ny.array([5,6,7,8])

ny.vstack([v1,v2,v1,v2])

# Horizontal  stack
h1 = ny.ones((2,4))
h2 = ny.zeros((2,2))

ny.hstack((h1,h2))

#loading data from a file
'''filedata = ny.genfromtxt('data.txt', delimiter=',')
filedata = filedata.astype('int32')
print(filedata)'''

ar= ny.array([[1,2,3,4], [6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25],[26,27,28,29,30]])
print(ar[2:4,0:2])#printing