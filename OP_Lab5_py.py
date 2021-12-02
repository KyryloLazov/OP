n = int(input("Введіть n:"))
m = int(input("Введіть m:"))
Sum = 0
i = 1
while(i<m):
    Sum = 0
    digit = i
    while(digit!=0):
        Sum = Sum+(digit%10)
        digit = int(digit/10)
    if(Sum==n):
        print(i)
        i=i+1
    else:
        i=i+1
