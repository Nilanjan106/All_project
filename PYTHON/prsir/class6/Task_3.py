numbers = [1,2,3,4,5]
class reverse:
    def __init__(self,numbers):
        self.numbers = numbers
        self.index = len(numbers)
    def __iter__(self):
        return self
    def __next__(self):
        if(self.index == 0):
            raise StopIteration
        self.index -= 1
        return self.numbers[self.index]
        
result = reverse(numbers)
for i in result:
    print(i)