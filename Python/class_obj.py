#Testing OBject And Classes

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

