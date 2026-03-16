import numpy as np
n = np.random.randint(0,20,size=6)
print(n)
val = filter(lambda X : X%2==0,n)
for i in val:
    print(i)

    