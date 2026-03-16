# s = [1,2,5,6,8,9]
# print(s[0:2])
# def insert_at_Last(array,element) :
#     array.append[element]
#     return array
# s.append(10)
# new = insert_at_Last(s,10)
# print(new)

# Insert Element

# def insert(arr, index, element):
#     arr.insert(index, element)
#     return arr

# arr = [1, 2, 3, 4, 5, 6, 7, 8]
# newarr = arr.copy()
# num = int(input("Enter how many terms you want to enter: "))
# for i in range(1, num + 1):
#     index = int(input(f"Enter your index {i}: "))
#     element = int(input(f"Enter your element {i}: "))
#     newarr = insert(newarr, index, element)
    
# print(newarr)

# # Modify Elemnet

# def modify (arr,index,element) :
#     arr[index] = element
#     return arr

# arr = [1, 2, 3, 4, 5, 6, 7, 8]
# newarr = arr.copy()
# num = int(input("Enter how many terms you want to enter: "))
# for i in range(1, num + 1):
#     index = int(input(f"Enter your index {i}: "))
#     element = int(input(f"Enter your element {i}: "))
#     newarr = modify(newarr, index, element)
    
# print(newarr)

#merge

def merge (arr1,arr2) :
    arr1 = arr1+arr2
    return arr1

arr1 = [1, 2, 3, 4, 5, 6, 7, 8]
arr2 = [1, 2, 3, 4, 5, 6, 7, 8]
num = int(input("Enter how many terms you want to enter: "))
for i in range(arr1, arr2):
    newarr = merge(arr1,arr2)
    
print(newarr)

