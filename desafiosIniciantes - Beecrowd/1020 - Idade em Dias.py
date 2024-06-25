import math

old = int(input())

anos = math.floor(old / 365)
meses = math.floor((old % 365) / 30)
dias = math.floor(old % 365 % 30)

print(f"{anos:.0f} ano(s)")
print(f"{meses:.0f} mes(es)")
print(f"{dias:.0f} dia(s)")
