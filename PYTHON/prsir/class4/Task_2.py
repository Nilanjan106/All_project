a = 5
def factorial(a):
    if a == 1:
        return 1
    return a*factorial(a-1)
result = factorial(a)
print(result)