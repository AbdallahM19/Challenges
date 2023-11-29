def sum_array(a):
    total = 0
    # you can remove the next line (num = 0) and the program will work
    num = 0
    for num in a:
        total += num
    # you can remove the next line (num += 1) and the program will work
        num += 1
    return total

# remove the two lines and it will work also (num = 0)(num += 1)

# Examples
example1 = [1, 5.2, 4, 0, -1]
example2 = []
example3 = [-2.398]

# Test the function
result1 = sum_array(example1)
result2 = sum_array(example2)
result3 = sum_array(example3)

# Print results
print(f"Input: {example1}\nOutput: {result1}")
print(f"Input: {example2}\nOutput: {result2}")
print(f"Input: {example3}\nOutput: {result3}")