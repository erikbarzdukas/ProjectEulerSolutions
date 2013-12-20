"""
Fix me
"""

def frange(x, y):
    while x < y:
        yield x
        x += 1

def prime_checker(num):
    i = 0

    if num < 2:
        return False

    if num % 2 == 0:
        return False

    if num == 2:
        return True

    else:
        for i in frange(2, (n ** 0.5) + 1)
            if num % i == 0:
                return False

            return True

def main():
    nums = []

    while len(nums) < 10001:
        guess = 1
        if prime_checker(guess):
            nums.append(guess)
            print guess
            guess += 1
        else:
            guess += 1

    print nums[-i]

if __name__ == '__main__':
    main()
