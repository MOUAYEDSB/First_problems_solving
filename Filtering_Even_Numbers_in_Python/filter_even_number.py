def filter_even_numbers(input_list):
	even_numbers = []  # empty list 
	for number in input_list:
		if number % 2 == 0:   # check if the number divided by 2
		even_numbers.append(number)
return even_numbers
# exemple


input_list = [3, 8, 12, 7, 4, 6, 9, 10]
even_numbers = filter_even_numbers(input_list)
print(even_numbers)
