import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
img = Image.open('/content/daniel-craig.png').convert('L')
img = img.resize((400,400), Image.ANTIALIAS)
# convert to numpy array 
numpy_image = np.array(img)
numpy_image.shape
row = numpy_image.shape[0]
column = numpy_image.shape[1]
new_array = np.zeros(shape=(row,column))
for i in range(row):
    for j in range(column):
        new_array[i][j] = numpy_image[i][j]
for i in range(row):
    for j in range(column):
        if((numpy_image[i][j]>100)&(numpy_image[i][j]<150)):
            new_array[i][j] = 255
    else:
        new_array[i][j] = 0
gray_level_slicing_image = Image.fromarray(new_array)  
gray_level_slicing_image = gray_level_slicing_image.convert("L")
print("Name: Basanta Rai")
print("Roll No: 23473")
gray_level_slicing_image

# Brighten(or darken) pixel values in a range of interest and leave all others unchanged.
new_array2 = np.zeros(shape=(row,column))
for i in range(row):
    for j in range(column):
        if((numpy_image[i][j]>100)&(numpy_image[i][j]<150)):
            new_array2[i][j] = 0
    else:
        new_array2[i][j] = numpy_image[i][j]
gray_level_slicing_image2 = Image.fromarray(new_array2)  
gray_level_slicing_image2 = gray_level_slicing_image2.convert("L")
print("Name: Basanta Rai")
print("Roll No: 23473")
gray_level_slicing_image2
