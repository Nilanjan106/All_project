class car :
    def __init__(self,make,model,year,milage):
        self.make = make
        self.model = model
        self.year = year
        self.milage = milage
        
    def drive (self):
        print(f"Milage : {self.milage =  10}")
        
    def get_description(self) :
        print(f"Make : {self.make}")
        print(f"Model : {self.model}")
        print(f"year : {self.year}")
        print(f"Milage : {self.milage}")
c1 = car("Honda","ShineSp",2016,65)
c1.drive()
c1.get_description()

        