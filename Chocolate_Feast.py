t = int(input())

for a in range(t):
  n, c, m = input().split()
  n, c, m = int(n), int(c), int(m)
  eaten = 0
  eaten = int(n / c)
  remaining_bars = int(n / c)
  
  while remaining_bars >= m:
    eaten = eaten + int(remaining_bars / m)
    remaining_bars = int(remaining_bars / m) + (remaining_bars % m)
  print(eaten)