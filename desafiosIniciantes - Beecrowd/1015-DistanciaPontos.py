import math

line = input().split(' ')
x1 = float(line[0])
y1 = float(line[1])

line2 = input().split(' ')
x2 = float(line2[0])
y2 = float(line2[1])

distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

print(f"{distance:.4f}")
