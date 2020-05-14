def solution(n):
    list = [1, 2]
    for i in range(2, n, 1):
        chk = (list[i-1]+list[i-2]) % 1000000007
        list.append(chk)
    return list[len(list)-1]
