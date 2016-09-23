from random import randint

while(True):
        opt = ['r', 'p', 's']
        comp = opt[randint(0,2)]
        print "Rock(r) Paper(p) Scissors(s) quit(q)"
        user = raw_input()
        if(user == 'q' or user == 'Q'):
                break
        if(user == comp):
                print "Tie !"
        elif(user == 'r' or user == "R"):
                if(comp == 'p'):
                        print "You Loose! "
                else:
                        print "You Win ! "
        elif(user == 'p' or user == 'P'):
                if(comp == 's'):
                        print "You Loose! "
                else:
                        print "You Win! "
        elif(user == 's' or user == 'S'):
                if(comp == 'r'):
                        print "You Loose! "
                else:
                        print "You Win !"
        else:
                print "Invalid ! Retry !"
