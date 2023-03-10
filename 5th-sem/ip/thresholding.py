#import libraries
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
def Threshold_Image(image):
    threshold = int(input("Enter Value of threshold "))
  image = image.resize((400,400), Image.ANTIALIAS)
  # convert to numpy array 
  numpy_image = np.array(image)

  row = numpy_image.shape[0]
  column = numpy_image.shape[1]

  new_array = np.zeros(shape=(row,column))
  for i in range(row):
      for j in range(column):
          if(numpy_image[i][j]>=threshold):
              new_array[i][j] = 255 
      else:
          new_array[i][j] = 0
  #converting array back to image
  threshold_image = Image.fromarray(new_array)  
  threshold_image = threshold_image.convert("L")

  return threshold_image
# reading image and converting to gray scale
image = Image.open('/content/eye.jpg').convert('L')
# calling negative function
threshold_image = Threshold_Image(image)


#displaying the images
fig = plt.figure()
fig.set_figheight(20)
fig.set_figwidth(20)

fig.add_subplot(1,2,1)
plt.imshow(image, cmap='gray')
plt.title('Original image')

fig.add_subplot(1,2,2)
plt.imshow(threshold_image, cmap='gray')
plt.title('Threshold image')
print("Name: Basanta Rai")
print("Roll No: 23473")
