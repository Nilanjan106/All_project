# num = int(input("Enter any number"))
# print(num)
# list_1 = []
# for i in range(5):
#     num1 = int(input("Enter number"))
#     list_1.append(num1)
# print(list_1)

# list_2 = ["Mango","Appple","Egg","Orange","pineapple"]
# list_2.append("Guava")
# list_2.remove("Mango")
# print(list_2)


# if(num1 > 0):
#     for i in range(5):
#        num1 = int(input("Enter number"))
    
#        sum = sum + num1
# elif(num1 == 0):
#         print("0")

# def sum():
#     add = 0
#     while(True):
#      num1 = int(input("Enter number"))
#      if(num1 == 0):
#         break
#      add = add + num1
#      print(add)

# sum()


# for i in range(1,11):
#     if(i == 5):
#         continue
#     if(i>8):
#         break
#     print(i)

# stri = input("Enter  ")
# b = 0
# for i in stri:
#     print(i)
#     b = b + 1
# print(b)

# def facto(n):
#     mul = 1
#     if(n == 0):
#         return
#     else:
#         for i in range(1,n+1):
#             mul = mul * i
#     return mul
# n = facto(6)
# print(n)

# def fibo(n):
#     if(n==0 or n == 1):
#         return 1
#     else:
#        return fibo(n-1) + fibo(n-2)
    
# n = fibo(6)
# print(n)

# list1 = [1,2,3,4,5,6,7,8,9]
# for i in list1:
#     if(i%3 == 0):
#         continue
#     print(i)

# books = [{"title" : "The Btech", "author" :"The Mtech","year":2012},
#          {"title" : "The BCA","author" : "The MCA","year" : 2016},
#          {"title" : "The BSC","author" : "The MSC","year" : 2017}]

# sorted_book = sorted(books,key=lambda book:book["year"])
# for book in books:
#     print(book)

# student = {"name" : "Nilanjan Sau","age" : 20,"courses" : "BTech"}
# student['graduate'] = False
# print(student)

# class student:
#     name = ""
#     age = 0
#     grade = ""

#     def get_grade(self):
#         return self.grade
#     def get_info(self):
#         return print(f"{self.name} and {self.age}")
    

# s1 = student()
# s1.grade = "A"
# s1.age = 20
# s1.name = "Nilanjan Sau"
# print(s1.get_grade())
# s1.get_info()

# class Rectangle:
#     length = 0
#     width = 0

#     def area(self):
#         return self.length * self.width  # Corrected multiplication

#     def perimeter(self):
#         return 2 * (self.length + self.width)  # Corrected addition

# # Create an instance of the Rectangle class
# r1 = Rectangle()
# r1.length = 10
# r1.width = 5

# # Call the methods and print results
# print("Area:", r1.area())
# print("Perimeter:", r1.perimeter())


# class bankaccount :
#     def __init__(self,owner,balance = 1000.0):
#         self.owner = owner
#         self.balance = balance

#     def deposit(self):
#         b = int(input("Enter amount"))
#         self.balance += b
#         print(f"Account balances is {self.balance}")
#     def withdraw(self):
#         b = int(input("Enter amount"))
#         if(b<= self.balance):
#             self.balance -= b
#         else:
#             print("Insufficient Balance")
#     def get_balance(self):
#         return self.balance
# b1 = bankaccount("Nilanjan",1000)
# print(b1.deposit())
# print(b1.withdraw())
# print(b1.get_balance())

# class BankAccount:
#     def __init__(self, owner, balance=0.0):
#         """Initialize the BankAccount with owner and an initial balance."""
#         self.owner = owner
#         self.balance = balance

#     def deposit(self, amount):
#         """Add a given amount to the balance."""
#         if amount > 0:
#             self.balance += amount
#             print(f"Deposited {amount}. New balance is {self.balance}.")
#         else:
#             print("Deposit amount must be positive.")

#     def withdraw(self, amount):
#         """Subtract a given amount from the balance if sufficient funds are available."""
#         if amount > self.balance:
#             print("Insufficient funds for this withdrawal.")
#         elif amount <= 0:
#             print("Withdrawal amount must be positive.")
#         else:
#             self.balance -= amount
#             print(f"Withdrew {amount}. New balance is {self.balance}.")

#     def get_balance(self):
#         """Return the current balance."""
#         return self.balance


# # Create an instance of BankAccount
# account = BankAccount(owner="John Doe")

# # Perform a series of deposits
# account.deposit(1000)  # Deposit 1000
# account.deposit(500)   # Deposit 500

# # Perform a series of withdrawals
# account.withdraw(300)  # Withdraw 300
# account.withdraw(1500) # Attempt to withdraw more than the balance

# # Print the final balance
# print(f"\nFinal balance for {account.owner}: {account.get_balance()}")

# number = [1,2,3,4,5,6]
# class reverse1:
#     def __init__(self,number):
#         self.number = number
#         self.index = len(number)

#     def __iter__(self):
#         return self
#     def __next__(self):
#         if(self.index == 0):
#            raise StopIteration
#         self.index -= 1
#         return self.number[self.index]
    
# result = reverse1(number)
# for i in result:
#     print(i)


number = [1, 2, 3, 4, 5, 6]
class reverse1:
    def __init__(self, number):
        self.number = number
        self.index = len(number)

    def __iter__(self):
        return self

    def __next__(self):
        if self.index == 0:
            raise StopIteration
        self.index -= 1  # Fixed the decrement operation
        return self.number[self.index]
    
result = reverse1(number)
for i in result:
    print(i)
