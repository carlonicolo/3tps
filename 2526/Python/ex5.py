# Python program to check whether a number is palindrome.
def checkPalindrome(n):
    String = ""
    if n.isdigit():
        # len() function finds the length of a string n.
        length_of_string = len(n)
        iNum = int(n)  # converting string into integer.
        while iNum != 0:
            remDigit = iNum % 10
            String = String + str(remDigit)
            iNum = iNum // 10
        if n == String:
            print('Number is a palindrome.')
        else:
            print('Number is not a palindrome.')


def main_fn():
    N = input('Enter a number: ')
    checkPalindrome(N)


main_fn()
