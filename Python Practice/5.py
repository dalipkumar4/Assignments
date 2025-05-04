# Q5.Write a program to print month name using dictionary keys

month = {
    1:'January',
    2:'February',
    3:'March',
    4:'April',
    5:'May',
    6:'June',
    7:'July',
    8:'August',
    9:'September',
    10:'October',
    11:'November',
    12:'December'
    }

num1 = int(input("Enter the month(1-12): "))

if ((num1 >1) and (num1 <= 12)):
    print(month[num1])
else:
    print("This is Invalid!")
