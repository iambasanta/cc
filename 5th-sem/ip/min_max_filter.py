import numpy as np
from PIL import Image
import matplotlib.pyplot as plt

def min_filter(input_image, filter_size=1):
    img = input_image.resize((400,400), Image.ANTIALIAS)

    # convert to numpy array 
    numpy_image = np.array(img)
    # array for padding
    pad_size = (filter_size-1) // 2
    array_b = np.pad(numpy_image, [(pad_size, pad_size),(pad_size, pad_size)], 'constant')

    #defining filter
    filter_array = np.ones((filter_size, filter_size))

    #creating empty list

    lst = []
    for i in range(400):
        for j in range(400):
            #extracting part of array equal to filter size
          array_c = array_b[i:(filter_size+i),j:(filter_size+j)]

         #applying filter
          array_mul = array_c * filter_array
          array_sum = np.min(array_mul)

          # putting calculated value in list
          lst.append(array_sum)

    # resizing lst to shape of original array
    final_array = np.resize(lst,(400,400))

    final_image = Image.fromarray(final_array).convert("L")
    return final_image

def max_filter(input_image, filter_size=1):
    img = input_image.resize((400,400), Image.ANTIALIAS)

    # convert to numpy array 
    numpy_image = np.array(img)
    # array for padding
    pad_size = (filter_size-1) // 2
    array_b = np.pad(numpy_image, [(pad_size, pad_size),(pad_size, pad_size)], 'constant')

    #defining filter
    filter_array = np.ones((filter_size, filter_size))

    #creating empty list

    lst = []
    for i in range(400):
        for j in range(400):
            #extracting part of array equal to filter size
          array_c = array_b[i:(filter_size+i),j:(filter_size+j)]

         #applying filter
          array_mul = array_c * filter_array
          array_sum = np.max(array_mul)

          # putting calculated value in list
          lst.append(array_sum)

    # resizing lst to shape of original array
    final_array = np.resize(lst,(400,400))

    final_image = Image.fromarray(final_array).convert("L")
    return final_image
# reading image and converting to gray scale
img = Image.open('/content/eye.jpg').convert('L')
# Call filter function
filter_size = 0
while(filter_size%2 == 0):
    filter_size = int(input("Enter filter size : "))

fig = plt.figure(figsize=(10,10))

#plotting original image
fig.add_subplot(2,2,1)
plt.imshow(img, cmap='gray')
plt.title('original')

min_image = min_filter(img, filter_size)
max_image = max_filter(img, filter_size)

fig.add_subplot(2,2,3)
plt.imshow(min_image, cmap='gray')
plt.title('Min image')

fig.add_subplot(2,2,4)
plt.imshow(max_image, cmap='gray')
plt.title('Max image')
