a = 1
b = 1
total = 0

while a < 4000000:
    a, b = b, a + b
    if a % 2 == 0:
        total = total + a
        print total
print total

