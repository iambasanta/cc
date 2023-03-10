import numpy as np
from PIL import Image
import matplotlib.pyplot as plt

def log_transform(input_image):
    # resizing image
  img = input_image.resize((400,400), Image.ANTIALIAS)
  # convert to numpy array 
  numpy_image = np.array(img)
  numpy_image = numpy_image/255
  numpy_image = numpy_image + 1
  numpy_image = np.log(numpy_image)
  print(type(numpy_image))
  numpy_image = numpy_image * 255
  numpy_image = np.around(numpy_image,decimals=0)
  log_image = Image.fromarray(numpy_image)
  log_image = log_image.convert("L")
    #plotting input and output images
  # set up side-by-side image display
  fig = plt.figure()
  fig.set_figheight(15)
  fig.set_figwidth(15)

  fig.add_subplot(1,2,1)
  plt.imshow(img, cmap='gray')
  plt.title('original image')

  fig.add_subplot(1,2,2)
  plt.imshow(log_image, cmap='gray')
  plt.title('log-transform')

  return log_image
# reading image and converting to gray scale
img = Image.open('/content/daniel-craig.png').convert('L')
# display image
a = log_transform(img)

print("Name: Basanta Rai")
print("Roll No: 23473")
