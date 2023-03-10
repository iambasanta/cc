import numpy as np
from PIL import Image
import matplotlib.pyplot as plt

def Negative_Image(image):
    image = image.resize(image.size, Image.ANTIALIAS)
    # convert to numpy array 
    numpy_image = np.array(image)
    new_array = 255 - numpy_image
    negative_image = Image.fromarray(new_array).convert("L") 
    return negative_image

image = Image.open('/content/daniel-craig.png').convert('L')
negative_image = Negative_Image(image)

fig = plt.figure(figsize=(20,20))

fig.add_subplot(1,2,1)
plt.imshow(image, cmap='gray')
plt.title('original image')

fig.add_subplot(1,2,2)
plt.imshow(negative_image, cmap='gray')
plt.title('Negative image')

print("Name: Basanta Rai")
print("Roll No: 23473")
