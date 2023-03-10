import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
def contrast_stretching(input_image):
    img = input_image.resize((500,500), Image.ANTIALIAS)
  #converitng it to array
  img_array = np.asarray(img)
  min = np.amin(img_array)
  print(min)
  max = np.amax(img_array)
  print(max)
  range = max-min
  row = 400
  column = 400
  array_b = np.zeros((row,column))
  array_b = (((img_array - min)/range)*255)
  min = np.amin(array_b)
  print(min)
  max = np.amax(array_b)
  print(max)
  final_image = Image.fromarray(array_b)
  final_image= final_image.convert("L")
  # set up side-by-side image display
  fig = plt.figure()
  fig.set_figheight(8)
  fig.set_figwidth(8)
  fig.add_subplot(2,2,1)
  plt.imshow(img, cmap='gray')
#Plotting Histogram
  flat = img_array.flatten()
  fig.add_subplot(2,2,3)
  plt.hist(flat, bins=50)
  fig.add_subplot(2,2,2)
  plt.imshow(final_image, cmap='gray')

#Plotting Histogram
  flat2 = array_b.flatten()
  fig.add_subplot(2,2,4)
  plt.hist(flat2, bins=50)
  return final_image
# reading image and converting to gray scale
input_image = Image.open('/content/daniel-craig.png').convert('L')
a = contrast_stretching(input_image)
print("Name: Basanta Rai")
print("Roll No: 23473")
