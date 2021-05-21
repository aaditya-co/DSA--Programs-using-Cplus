n = int(input("Enter Number of Rows: "))
for i in range(n):
    print('*' * (i+1))
print("--------------------------------")
for i in range(n):
    print('*' *(n-i))
print("--------------------------------")
for i in range(n):
    print('*' *n)
print("--------------------------------")
for i in range(n):
    print(' ' *(n-i-1) + '* ' *(i+1))