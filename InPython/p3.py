#Find the largest prime factor of a large number
#for project euler number 3
#
#Why don't my ranges like floats?
#

def frange(x, y):
    while x < y:
        yield x
        x += 1

def factor_generator(end):
    n = end 
    i = 1

    for i in frange(3, (n ** 0.5) + 1):
        if n % i == 0:
            yield i
        i += 1

def prime_checker(num):
    if num < 2:
        return False

    if num % 2 == 0:
        return False

    if num == 2:
        return True
    else:
        for i in frange(2,(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True
p = factor_generator(600851475143)

for factor in p:
    if prime_checker(factor) == True:
        print factor
 

