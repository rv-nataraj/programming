import sys
n=len(sys.argv)
sum=0

for i in range(1,n):
    sum=sum+int(sys.argv[i])

print(sum)

