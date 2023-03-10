import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
img = Image.open('/content/daniel-craig.png').convert('L')
def bit_slicing_function(input_image):
    img = input_image.resize((400,400), Image.ANTIALIAS)
    # convert to numpy array 
    numpy_image = np.array(img)
    fig = plt.figure(figsize=(20,20))
    fig.add_subplot(3,3,1)
    plt.imshow(img, cmap='gray')
    plt.title('original image')

import numpy as np
from PIL import Image
import matplotlib.pyplot as plt

img = Image.open('/content/daniel-craig.png').convert('L')
def bit_slicing_function(input_image):
    img = input_image.resize((300,300), Image.ANTIALIAS)
    # convert to numpy array 
    numpy_image = np.array(img)
    fig = plt.figure(figsize=(20,20))
    fig.add_subplot(3,3,1)
    plt.imshow(img, cmap='gray')
    plt.title('original image')
    binary = lambda x: np.vectorize(np.binary_repr)(x, width = 8)
    lst = binary(np.array(img)).flatten()
    for i in range(7, -1, -1):
        idx = 7-i
        img_bit = (np.array([int(i[idx]) for i in lst], dtype=np.uint8) * (2**i)).reshape(300,300)
        bit_img = Image.fromarray(img_bit)
        fig.add_subplot(3, 3, 9-i)
        plt.imshow(bit_img, cmap='gray')
        plt.title(f'{i+1} bit')

print("Name: Basanta Rai")
print("Roll No: 23473")
bit_slicing_function(img)
