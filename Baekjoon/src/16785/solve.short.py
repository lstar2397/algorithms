A,B,C=map(int,input().split());r=c=0
while r<C: c+=1;r+=A+(0 if c%7 else B)
print(c)