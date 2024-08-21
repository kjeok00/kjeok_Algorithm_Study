n, m = map(int, input().split())
chess = []

minPaint = float('inf')

for i in range(n):
    row = input()
    chess.append(list(row))
        
for i in range(n-7):
    for j in range(m-7):
        
        repaint1 = 0
        repaint2 = 0

        for x in range(8):
            for y in range(8):
                currentColor = chess[i+x][j+y]

                # 짝수W, 홀수B
                if (x+y)%2 == 0:
                    if currentColor != 'W':
                        repaint1 += 1
                    if currentColor != 'B':
                        repaint2 += 1
                else:
                    if currentColor != 'B':
                        repaint1 += 1
                    if currentColor != 'W':
                        repaint2 += 1

        minPaint = min(minPaint, repaint1, repaint2)

print(minPaint)