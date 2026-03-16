a = 10
def isPrime(a):
    count = 0
    for j in range(2,a) :
        if a%j == 0 :
            count += 1
            
    if count > 0:
        print("nP")
    else :
        print("p")
        
isPrime(a)