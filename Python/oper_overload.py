#Trying Operator Overloading '+'

class string_printer:
	"""Prints the string"""
	
	def print_str(self,st):
		print st

	
	def __add__(self, other):
		temp = self.st + other.st
		return temp

x = string_printer()
x.st = "hell"
y = string_printer()
y.st = "bound"
#Adding Objects
print x + y
	
