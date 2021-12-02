def find_coef(a, b, result):
    fact_a=1
    fact_b=1
    fact_ab=1
    i=1
    while(i<=a):
        fact_a = fact_a*i
        i = i+1
    i=1
    while(i<=b):
        fact_b = fact_b*i
        i = i+1
    i=1
    while(i<=a-b):
        fact_ab = fact_ab*i
        i = i+1
    result = fact_a/(fact_b*fact_ab)
    return result

n = int(input())
i = 0
k = 0
coef = 0
for i in range(0, n+1):
    for k in range(0, i+1):
        coef = find_coef(i, k, coef) 
        print(coef, end =" ")
        k=k+1    
    i=i+1
    print("\n")