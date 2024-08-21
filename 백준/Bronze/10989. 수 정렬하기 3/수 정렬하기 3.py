import sys

# 최대 값 10000
MAX_VALUE = 10000

# 수의 개수 N 입력받기
N = int(input())

# 카운트 배열 초기화 (0으로 초기화된 MAX_VALUE+1 크기의 배열)
count = [0] * (MAX_VALUE + 1)

# N개의 수를 입력받으면서 해당 수의 카운트를 증가
for _ in range(N):
    num = int(sys.stdin.readline())
    count[num] += 1

# 카운트 배열을 순회하면서 각 숫자를 등장 횟수만큼 출력
for i in range(1, MAX_VALUE + 1):
    if count[i] > 0:
        for _ in range(count[i]):
            sys.stdout.write(str(i) + '\n')
