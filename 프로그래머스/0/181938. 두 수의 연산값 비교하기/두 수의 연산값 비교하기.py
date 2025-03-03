def solution(a, b):
    com = int(str(a) + str(b))
    mul = 2 * a * b
    answer = max(com, mul)
    return answer