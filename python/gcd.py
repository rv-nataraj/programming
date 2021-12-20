a=12
b=24
for i in range(1,a+1):
    if ((a%i==0) and (b%i==0)):
        gcdval=i
print(gcdval)