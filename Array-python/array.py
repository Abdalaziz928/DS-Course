# Array Representation
# An array can be declared in various ways and different languages. The important points that should be considered are as follows:

# Index starts with 0.
# We can access each element via its index.
# The length of the array defines the capacity to store the elements.
# Array operations
# Some of the basic operations supported by an array are as follows:

# Traverse - It prints all the elements one by one.
# Insertion - It adds an element at the given index.
# Deletion - It deletes an element at the given index.
# Search - It searches an element using the given index or by the value.
# Update - It updates an element at the given index.
# The Array can be created in Python by importing the array module to the python program.

# from array import *

# #print(dir(array))
# arrayName = array('i',[1,2,3,4,5,6])
# print(arrayName[1])

# import array as arr 

# a = arr.array('i',[1,2,3,4,5,8])
# print("the firs element is ",a[0])
# print("The second element is ",a[1])


# How to change or add elements 
# Array are multable, and their elements can be changed in a similar way like list

# numbers = arr.array('i',[1,2,3,4,5,6])

# =============== Change first element =========== 
# numbers[0] = 0

# print(numbers) # Output of array('i',[0,2,3,4,5,6])

# ================ Change 3rd to 5th element ===========
# numbers[2:5] = arr.array('i',[10,20,30])

# print(numbers) # Output: array('i',[0,2,10,20,30,6])

#================= Delete ===========

# import array as arr

# number = arr.array('i',[1,2,3,3,5])

# del number[2]               # remove third element 
# print(number)               # Output: array('i',[1,2,3,4])

# =========== Finding The length of array
# The length of an array is defined as the number of elememts present in an array.
# it retuens an integer value the is equal to the total number of the elements present in that array

# print(len(number)) 

#=======================================

# =========== Array concatenation ==========
# We can easily concatenation any two array using + symbol
# As Merge in C++ 

# import array as arr 

# a = arr.array('i',[1,2,3,4,5])
# b = arr.array('i',[6,7,8,9,10])

# c = arr.array('i')
# c = a + b

# print("Array C = ",c)

# =================== Access in elements using negative index =========================
# import array as arr 

# x = arr.array('i',[1,2,3,4,22])

# print("The last element: ",x[-1])
# ====================================================================================





