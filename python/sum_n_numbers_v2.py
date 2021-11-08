import sys

file=open(sys.argv[1])

sum=0
for line in file:
    print(line)
    for i in line.split(','):
        sum=sum+int(i)

print(sum)
file.close() 