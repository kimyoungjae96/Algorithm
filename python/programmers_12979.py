def solution(n, stations, w):
    answer = 0
    start = 0
    stationsDistance = []
    for i in stations:
        end = i-w-1
        if(end-start > 0):
            stationsDistance.append(end-start)
        start = i+w
        if start > n:
            break
    if(n-(stations[-1]+w) > 0):
        stationsDistance.append(n-(stations[-1]+w))

    for i in stationsDistance:
        a, b = divmod(i, 2*w+1)
        if(b != 0):
            answer += a+1
        else:
            answer += a
    return answer
