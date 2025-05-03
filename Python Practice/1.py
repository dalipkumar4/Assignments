# Q1.write a program which will print the sum of even/odd number b/w Two given number

num1 = 7
num2 = 20
sumOdd = 0
sumEven = 0

for i in range(num1,num2):
    if(i % 2 == 0):
        sumEven += i
print(f"The sum of even number {num1} to {num2} is:",sumEven)

for i in range(num1,num2):
    if(i % 2 != 0):
        sumOdd += i
print(f"The sum of odd number {num1} to {num2} is:",sumOdd)
