
def longestCommonPrefix(strs) -> str:
    lens = [len(s) for s in strs]
    min_len = min([len(s) for s in strs])
    min_len_ind = lens.index(min_len)

    shortest_s = strs[min_len_ind]
    i = 0
    result = shortest_s
    while(i < len(shortest_s)):
        for s in strs:
            if result[i] != s[i]:
                return result[:i] if i > 0 else ''
        i += 1
    return result


str = ['mango','many','more']
print(longestCommonPrefix(str))