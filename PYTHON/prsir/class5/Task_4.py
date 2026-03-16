class Book :
    def __init__(self,title,author,year):
        self.title = title
        self.author = author
        self.year = year
        
    def get_summary(self):
        print(f"Title : {self.title}")
        print(f"Title : {self.author}")
        print(f"Title : {self.year}")
        
    def is_classic(self) :
        if(2024-self.year>=50):
            print("True")
        else:
            print("False")
            
b1 = Book("Math","Das & Pal",1900)
b1.get_summary()
b1.is_classic()