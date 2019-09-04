#[2015-10-26] Challenge #238 [Easy] Consonants and Vowels
v=['a','e','i','o','u']
c=['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z']
import random
string = raw_input()
word=[]
for i in range (len(string)):
	if string[i] == 'v':
		word.append(random.choice(v))
	else:
		word.append(random.choice(c))

print ''.join(word)

