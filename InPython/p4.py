#  Largest palindrome from product of 2 3 three digit numbers
#
#

def check_palindrome(num):

    if str(num)==str(num)[::-1]:
        return True

def return_max(data):
    maxval = data[0]

    for i in data:
        if i >= maxval:
            maxval = i

    return maxval


def gen_palindrome_guesses():
    for val1 in range(100,999):
        for val2 in range(100,999):
            yield val1 * val2

# main stuff

palindromes = []

for guess in gen_palindrome_guesses():
    if check_palindrome(guess):
        palindromes.append(guess)

print return_max(palindromes)

