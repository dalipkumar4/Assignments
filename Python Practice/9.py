# Q9. Write a program to print a star pattern

# *
# **
# ***
# ****
# *****
# ^
for i in range(0,5+1):
    for j in range(0,i):
        print("*", end="")
    print()

# *****
# ****
# ***
# **
# *
# ^
for i in range(5,0,-1):
    for j in range(0,i):
        print("*", end="")
    print()
