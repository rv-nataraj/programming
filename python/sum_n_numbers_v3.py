sum=0
n=int(input("Enter n value: "))
for i in range(1,n+1):
    x=int(input("Enter value {} : ".format(i)))
    sum=sum+x
print(sum)