class Fibo:
    def __init__(self,n):
        self.n = n
        self.index = 0
        self.first = 0
        self.last = 1
    
    def __iter__(self):
        return self
    def __next__(self):
        if(self.index>self.n):
            raise StopIteration
        if(self.index == 0):
            self.index += 1
            return self.first
        elif(self.index == 1):
            self.index += 1
            return self.last
        else:
            self.first,self.last = self.last,self.first + self.last
            self.index +=1
            return self.last
        
f = Fibo(5)
for i in f :
    print(i)