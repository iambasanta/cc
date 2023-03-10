import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
def sharp_filter(input_image):
    img = input_image.resize((400,400), Image.ANTIALIAS)
    numpy_image = np.array(img)
    array_b = np.pad(numpy_image, ((1,1), (1,1)), 'constant')
    #defining filter
    filter_array = np.array([[-1/9,-1/9,-1/9],
                             [-1/9,8/9,-1/9],
                             [-1/9,-1/9,-1/9]])
    #creating empty list
    lst = []
    for i in range(400):
        for j in range(400):
            #extracting part of array equal to filter size
            array_c = array_b[i:(3+i),j:(3+j)]

    array_mul = np.multiply(filter_array,array_c)
    array_sum = np.sum(array_mul)
    # putting calculated value in list
    lst.append(array_sum)
    # resizing lst to shape of original array
    final_array = np.resize(lst,(400,400))
    final_image = Image.fromarray(final_array)
    final_image= final_image.convert("L")
    return final_image

def high_boost(input_image):
    high_pass = sharp_filter(input_image)
    img = input_image.resize((400,400), Image.ANTIALIAS)
    numpy_image = np.array(img)
    A = 3
    high_boost = (A-1)*numpy_image + high_pass
    final_image = Image.fromarray(high_boost)
    final_image= final_image.convert("L")
    fig = plt.figure(figsize=(10,10))
    #plotting original image
    fig.add_subplot(1,2,1)
    plt.imshow(img, cmap='gray')
    plt.title('Original')
    fig.add_subplot(1,2,2)
    plt.imshow(final_image, cmap='gray')
    plt.title('High-boost image')
    return final_image
img = Image.open('/content/daniel-craig.png').convert('L')
# Calling smooth function 
a = high_boost(img)
print("Name: Basanta Rai")
print("Roll No: 23473")
