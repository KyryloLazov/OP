length = int(input("Input amount of elements:"))
str = input("Input string: ")
list = str.split()
print(list)
for i, elem in enumerate(list):
    list[i] = int(elem)
max = int(list[0])
min = int(list[0])
i = 0
while i<length:
    if(int(list[i]) > max):
        max = list[i]
        i+=1
    if(int(list[i])<min):
        min = list[i]
        i+=1
    else:
        i+=1
print("Max =", max)
print("Min =", min)
j=0
while j<length:
    if(int(list[j])==max):
        list[j] = min
        j+=1
    if(int(list[j])==min):
        list[j] = max
        j+=1
    else:
        j+=1
print(list)