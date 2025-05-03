#Q2.write a program that will take a number as input and print:
# > Reverse of the number

a = int(input("Enter the number: "))
for i in range(a):
    print(a-i)

       # ^^
# explaination:- let say a = 5
# i value starting from 1 and ending to range of i that is a 
# like this:-
# a = 5 - i = 0 = 5
# a = 5 - i = 1 = 4
# a = 5 - i = 2 = 3
# a = 5 - i = 3 = 2
# a = 5 - i = 4 = 1
# a = 5 - i = 5 = 0

# > Sum of digits of the number

sum = 0
a = int(input("Enter the number: "))
for i in range(a+1):
    sum += i   
print(f"The sum of {a} is",sum)

# Explaination:- We are running a loop 0 to a we will give a input and we added into a+1 for this a>=5
# after that we are stroing the value of i value that's increasing we we are adding that value into sum 
