class BankAccount :
    def __init__(self,owner,balance=0.0):
        self.owner = owner
        self.balance = balance
    def deposit(self) :
        self.balance = self.balance + 1500
        print(f"Account balances is {self.balance}")
    def withdraw (self) :
        if(self.balance>=1000) :
            self.balance = self.balance - 1000
            # print(f"Your balance is {self.balance}")
        else :
            print("Fund is not available")
            
    def get_balance(self):
        print(f"{self.balance}")
        
b1 = BankAccount("Nilanjan",500)
# b1.deposit()
b1.withdraw()
b1.get_balance()