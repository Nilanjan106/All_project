class rectangle :
    def __init__(self,length,width) :
        self.length = length
        self.width = width
        
    def area(self):
        return print(f"Area of rectangle is {self.length*self.width}")
    def perimeter(self):
        return print(f"Perimeter of Rectangle is : ({2*(self.length+self.width)}")
r = rectangle(2.5,2.0)
r.area()
r.perimeter()
        