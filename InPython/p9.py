###################################
#
# Project Euler 9
#
# Pythagorean triplit bidness
#
###################################
import math

#a simple check to see if a number is an int or float
#probably not super robust, but will work here
def isInt(some_num):
    if int(some_num) == some_num:
        return True
    else:
        return False

#Need a generator to make a bunch of pythagorean triplets
def pythagoreanTripletGenerator():
    
    c = 0

    # a**2 + b**2 = C**2 so add a**2 + b**2 and chekc that sqrt(c) is int
    for b in range(3,500):
        for a in range(1, b):

            maybe_c = math.sqrt(a**2 + b**2)

            if isInt(maybe_c):
                c = maybe_c
                yield [ a, b, c]

def sumTheTriplet(triplet):
    
    total = 0
    
    for t in triplet:
        total += t

    return total

def main():
    
    solution = 1

    for triplet in pythagoreanTripletGenerator(): 
        if sumTheTriplet(triplet) == 1000:
            answer = triplet
            break

    for triplet in answer:
        solution *= triplet
    
    #Now we have the answer
    print "The correct Pythagorean triplet is: ",  answer 
    print "Project Euler 9 solution: %d" % solution

 
if __name__ == '__main__':
    main()
