t = int(input())

for i in range(t):
  n = int(input())
  output = 1
  if n == 0:
    print(1)
  else:
    for j in range(1,n+1):
      if j % 2 != 0:
        output = output * 2
      else:
        output = output + 1
    print(output)