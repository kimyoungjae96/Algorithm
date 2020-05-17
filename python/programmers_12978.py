import heapq


def solution(N, road, K):
    min_heap = []
    newArr = [[] for i in range(0, N+1)]
    answer = 0
    # 1번에서 모든 곳으로 가는 비용..
    for i in road:
        newArr[i[0]].append([i[1], i[2]])
        newArr[i[1]].append([i[0], i[2]])

    chk = [0 for i in range(0, N+1)]
    minArr = [500000 for i in range(0, N+1)]
    heapq.heappush(min_heap, (0, 1))
    # 1번에서 시작
    while(min_heap):
        # minVal[0] => minVal값, minVal[1] => 해당요소
        print(min_heap)
        determineNum, determineIdx = map(int, list(heapq.heappop(min_heap)))
        # 결정난 값,결정난 인덱스
        if(chk[determineIdx] == 0):  # 결정난 인덱스인지 체크
            chk[determineIdx] = 1  # 해당 인덱스는 최소값을 결정완료
            minArr[determineIdx] = determineNum  # 최소값을 저장하는 곳에 데이터 업데이트
            # 배열 정보를 다 저장하고 있는 곳에서 인접리스트의 인덱스 번호에 해당하는 정보 접근 i[1] = 값, i[0] = 연결된 노드 번호
            for i in newArr[determineIdx]:
                if(chk[i[0]] != 1):  # 연결된 노드가 결정된게 아니면 힙에 푸시
                    # 연결 노드 푸시
                    heapq.heappush(min_heap, [i[1]+determineNum, i[0]])
                    # 최솟값을 갱신하는 배열에 있는 값보다 확정된 수와 주변에 연결되 있는 애들을 더한게 작을경우
                    if(determineNum + i[1] < minArr[i[0]]):
                        minArr[i[0]] = determineNum + i[1]  # 최솟값없데이트
    for i in minArr:
        if(i < K):
            answer += 1
    return answer


#     1   2   3   4   5

# 1   0   1  무한  2   무한
# 2   0   1   4   2    3
# 4   0   1   4   2    3
# 5   제외 제외  4   제외  제외

N = 6
road = [[1, 2, 1], [1, 3, 2], [2, 3, 2], [
    3, 4, 3], [3, 5, 2], [3, 5, 3], [5, 6, 1]]


K = 4

solution(N, road, K)
