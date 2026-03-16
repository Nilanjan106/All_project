favorite_colors = {}
def add_color(favorite_colors,person,color) :
            favorite_colors[person] = color
            
n = 1
while(n!=0) :
    c = input("Enter person : ")
    d = input("Enter color : ")
    add_color(favorite_colors,c,d)
    n = int(input("Enter 1 continue and 0 for termination"))
    
def view_color(favorite_colors):
    
    print(favorite_colors)
    
view_color(favorite_colors)

def check_color(favorite_colors,person) :
    print(favorite_colors[person])
    
e = input("Enter search person name : ")
check_color(favorite_colors,e)

def update_color(favorite_colors,person,new_color):
    favorite_colors[person] = new_color
    
g = input("Enter search person name : ")
f = input("Enter new color : ")
update_color(favorite_colors,g,f)
print(favorite_colors)