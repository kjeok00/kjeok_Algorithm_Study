n, m = map(int, input().split())
cards = list(map(int, input().split()))

maxNum = 0

for i in range(n):
    for j in range(i+1, n):
        for l in range(j+1, n):
            cardNum = cards[i] + cards[j] + cards[l]
            if maxNum < cardNum and cardNum <= m:
                maxNum = cardNum

print(maxNum)