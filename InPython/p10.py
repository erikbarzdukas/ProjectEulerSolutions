#######################################
#
#    Project Euler 10
#
#    Sum of all primes under 2M
#
#######################################

def frange(x, y):
    while x < y:
        yield x
        x += 1

def prime_generator():

    for number in range(1, 200000000):

        if number < 2:
            break

        if number % 2 == 0:
            break

        else:
            for i in frange(2, (number ** 0.5) + 1):
                if number % i == 0:
                    break
            yield number

answer = 0
prime = 0

for prime in prime_generator():
    answer += prime
    print answer

print "Project Euler 10 solution: %d" % answer    
