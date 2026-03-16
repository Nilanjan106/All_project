class rectangle :
    def __init__(self,length,width) :
        self.length = length
        self.width = width
        
    def area(self) :
       print(f" Area is {self.length * self.width}")
    def area1(self) :
       print(f" Perimeter is {2*(self.length + self.width)}")
       
r1 = rectangle(10,5)
r1.area()
r1.area1()

