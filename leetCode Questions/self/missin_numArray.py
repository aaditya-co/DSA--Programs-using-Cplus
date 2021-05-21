def missingNum(array, n):
    sum = n * (n +1 ) // 2
    for i in range(len(array)):
        sum = sum - array[i]

    
    return sum;




a = 5
array = [1, 2, 3, 5]
print(missingNum(array, a))
