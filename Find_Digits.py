t = int(input())

for i in range(t):
  n = int(input())
  x = 0
  for j in str(n):
    if int(j) != 0 and n % int(j) == 0:
      x+=1
  print(x)
