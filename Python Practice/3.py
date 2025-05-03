#Q3.Program to find and print prime numbers between two given numbers

# This program finds and prints all prime numbers between two given numbers

# Ask the user to enter the starting number
start = int(input("Enter the start number: "))

# Ask the user to enter the ending number
end = int(input("Enter the end number: "))

# Print a message to show what the program will do
print(f"Prime numbers between {start} and {end} are:")

# Go through every number from start to end
for num in range(start, end + 1):

    # Skip the numbers less than 2 because they are not prime
    if num < 2:
        continue

    # We will count how many numbers divide the current number exactly
    count = 0

    # Try dividing num by every number from 1 to num
    for i in range(1, num + 1):
        if num % i == 0:  # If i divides num with no remainder
            count += 1     # Increase the count

    # If the number has exactly two divisors (1 and itself), it is a prime number
    if count == 2:
        print(num)  # Print the prime number

