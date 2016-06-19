#Implementing Simple class in Python

class Point(object):
	def reset(self):
		self.x = 0
		self.y = 0

p1 = Point()
p1.x = 5
p1.y = 5

print p1
print p1.x
print p1.y
p1.reset()
print "After Reset"
print p1.x
print p1.y


