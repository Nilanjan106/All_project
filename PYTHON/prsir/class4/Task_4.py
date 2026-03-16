b = "aba"
len = len(b)
rev = b[-1:-len-1:-1]
def isPalindrome(b):
    if b == rev:
        print("String are Equal")
    else:
        print("String are not equal")
        
isPalindrome(b)