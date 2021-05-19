def balancing(s):
    stack = []
    pair = {")": "(", "}": "{", "]": "["}










    

    # for char in s:
    #     if(char not in pair):
    #         stack.append(char)
    #     else:
    #         if stack:
    #             if pair[char]!=stack.pop():
    #                 return False
    #         else:
    #             return False
                
    # if not(stack):
    #     return True


    








    # pair = {")": "(", "}": "{", "]": "["}

    # for i in s:

    #     if i in pair and pair[i] not in stack:
    #         return False

    #     if i not in pair:
    #         stack.append(i)
    #     else:
    #         if pair[i] in stack[-1]:
    #             stack.pop(-1)

    # if not stack:
    #     return True
    # else:
    #     return False


s = "[{(})]"
print(balancing(s))
