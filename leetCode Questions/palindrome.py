def palindrome(x):

    revs_number = 0
    final = x

    if x < 0:
        return False

    else:
        while (x > 0):
            remainder = x % 10
            revs_number = (revs_number * 10) + remainder
            x = x // 10

    
    if revs_number == final:
       return True
    else:
        return False








a = -121
res = palindrome(a)
print(res)