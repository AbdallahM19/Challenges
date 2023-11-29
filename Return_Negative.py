def makeNegative(num):
    return (num * -1) if (num > 0) else num

positive_number = 5
negative_number = -8
zero = 0

# Test makeNegative function
result_positive = makeNegative(positive_number)
result_negative = makeNegative(negative_number)
result_zero = makeNegative(zero)

# Print results
print(f"{positive_number} becomes {result_positive}")
print(f"{negative_number} remains {result_negative}")
print(f"{zero} remains {result_zero}")