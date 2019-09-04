#Python Image_encodeing_project
from PIL import Image

def convert_to_ascii(text):
	text_list = []
	count = 0
	for i in text:
		count = count + 1
		text_list.append(ord(i))
	print(count)
	if( count % 3 == 1):
		text_list.append(0)
		text_list.append(0)
		count = count + 2
	else:
		text_list.append(0)
		count = count + 1 
	print (text_list)	
	print (count)
	return(text_list)



def manipulate_pixel(ascii_string , image):
	pix = image.load()
	w,h = image.size
	
	tup_lis = []
	init = 2
	print (ascii_string[init])
	
	while( init < len(ascii_string)):
		lis = []
		lis.append(ascii_string[init])
		lis.append(ascii_string[init-1])
		lis.append(ascii_string[init-2])
		init = init + 3
		tup_lis.append(tuple(lis))
		
	print tup_lis
	print(len(tup_lis))
	
	for i in range(w):
		for j in range(h):
				for k in (tup_lis):
					print(i,j)
					pix[i,j] = k
					print(pix[i,j])

	image.save("Enc.jpg")
	
	

def main():
	image = Image.new("RGB",(50,50),"black")
	text = "This. is text which needs to be encoded into Image.First i will convert this String to ASCII values and Then manipulate the Image pixel values"

	ascii_string  = convert_to_ascii(text)
	print(ascii_string)
	
	manipulate_pixel(ascii_string,image)
	#image.save("Encode_Image.jpg")


if __name__ == '__main__':
	main()
