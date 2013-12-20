########################################################
#
# return the sum of all multiples of 3 and 5 under 100
########################################################

i = 0
total = 0

while i < 1000:
    if i % 3 == 0 or i % 5 == 0:
        total = total + i
        i += 1
    else:
        i += 1
        continue

print "The sum of all multiples of 3 and 5 under 1000 is %d" % total    
