from PIL import Image

im = Image.open("./200.jpg")

newImage = Image.new(im.mode, im.size, "black")
newImage.save("out.jpg")

im = Image.open("./200.jpg")

pix = im.load()
newpix = newImage.load()

for i in range(im.size[0]):
	for j in range(im.size[1]):
		li = list(pix[i,j])
		li[0] = li[0]/2
		li[1] = li[1]*2
		li[2] = li[2]/2
		newpix[i,j] = tuple(li)
		#newpix[i,j] = pix[i,j]		
newImage.save("out.jpg")
print "Done!"

