# Q7.Write a python program to input 'n' names and phone numbers to store it in a dictionary and to input any name and to print the phone numbers of that particular name
# Create an empty dictionary
emp = {}

# Take number of entries
n = int(input("How many contacts? "))

# Input names and numbers
for i in range(n):
    name = input("Enter name: ")
    number = input("Enter phone number: ")
    emp[name] = number

# search the name
search = input("Search the name: ")

#Print result
if search in emp:
    print(emp[search])
else:
    print("Not Found!")
