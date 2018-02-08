a=int(input("input the first one"))
b=int(input("input a number"))
for m in range(a,b):
  for c in range(2,m):
     if(m%c==0):
       break
  else:
     print(m)