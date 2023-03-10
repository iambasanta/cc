import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
# reading image and converting to gray scale
img = Image.open('/content/eye.jpg').convert('L')
# display image
img
img = img.resize((400,400), Image.ANTIALIAS)
# convert to numpy array 
numpy_image = np.array(img)
#read the image
# reading image and converting to gray scale
img2 = Image.open('/content/daniel-craig.png').convert('L')
# display image
img2
img2 = img2.resize((400,400), Image.ANTIALIAS)
numpy_image2 = np.array(img2)
aa = np.logical_xor(numpy_image, numpy_image2)
aa = Image.fromarray(aa)  
aa = aa.convert("L")
print("Name: Basanta Rai")
print("Roll No: 23473")
aa
