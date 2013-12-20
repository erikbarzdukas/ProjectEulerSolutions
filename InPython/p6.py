"""
Project Euler Problem 6
"""

def sum_squares():
    i = 0
    sumSquares = 0

    while i <= 100:
        sumSquares += (i * i)
        i += 1

    return sumSquares

def square_sums():
    i = 0
    nums = 0
    squareSums = 0

    while i <= 100:
        nums += i
        i += 1
    squareSums = nums * nums
    return squareSums

def main():
    print "Project Euler 6 solution: " +  str(square_sums() - sum_squares())

if __name__ == '__main__':
    main()
