a = 5
def factorial(a):
    if a == 1 :
        return 1
    elif a == 0 :
        return 0
    else :
        return factorial(a-1) + factorial(a-2)
for i in range(a):
    result = factorial(i)
    print(result)