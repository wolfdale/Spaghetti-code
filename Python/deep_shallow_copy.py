#Testing Deep Shalow copy
import copy

class new_class:
	"""Doc String (Generaly define attr of class (x,y)"""
	def __init__(self):
		print "INIT"

class corner:
	"""Doc String (z as object wit attr (a,b)"""
	def __init__(self):
		pass

obj =  new_class()
obj.x = 5
obj.y = 6
print obj.y
obj.z = corner()
obj.z.a = 44
obj.z.b = 64
print obj.z
print obj.z.a

#Shallow copy
copied_obj = copy.copy(obj)
#NoTice copied_obj and obj contain same data but they are not same
# Test it !!
copied_obj is obj
#deep Copy
deep_copy_obj = copy.deepcopy(obj)


