def reverse(x):
    revs_number = 0

    if x < 0:
        x = str(x)
        revs_number = int('-' + x[-1:0:-1])

    else:
        while (x > 0):
            remainder = x % 10
            revs_number = (revs_number * 10) + remainder
            x = x // 10

    return revs_number


a = -2147483
res = reverse(a)
if res > 2**31 - 1 or res < -2**31:
    res = 0

print(res)
