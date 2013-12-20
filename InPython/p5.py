# smalles number evenly divisble by all numbers 1-20
#
# p Euler 5

def divide_test(case):

    counter = 0

    for i in range(1,21):
        if case % i != 0:
            return False

    return True

#def main():


booly = True
guess = 2520
while booly:
    if divide_test(guess):
        print "Project Euler 5 solution: %d" % guess
        booly = False
    else:
        guess += 2520
