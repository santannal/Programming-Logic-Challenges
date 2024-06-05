# -*- coding: utf-8 -*-

value = input().split(' ')
a = int(value[0])
b = int(value[1])
c = int(value[2])

maiorAB = (a + b + abs(a - b)) / 2
maiorT = (maiorAB + c + abs(maiorAB - c)) / 2

print(f'{maiorT:.0f} eh o maior')