# Calculate Distance between two points

import math

class Point():
	"""DOCString"""
	def set_point(self, x, y):
		self.x = x
		self.y = y

	def cal_dist(self, other):
		dist = math.sqrt((self.x - other.x)**2 + (self.y - other.y)**2)
		return dist

p1 = Point()
p2 = Point()

p1.set_point(15,15)
p2.set_point(10,10)

distance = p1.cal_dist(p2)

print distance


