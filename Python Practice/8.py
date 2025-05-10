#Q8. write a program to reverse a string using recursion
def reverse_string(s):
    if len(s) <= 1:
        return s
    else:
        return reverse_string(s[1:]) + s[0]

s = "ISHA"
print(reverse_string(s))
