def dig_numbers(num):

    cont = 0
    while num > 0:
        num //= 10
        cont += 1
    return cont

def is_armstrong_number(number):

    orig_number = number
    exp = dig_numbers(number)
    sum = 0

    while number > 0:
        aux = number % 10
        sum += aux**exp
        number //= 10 

    return sum == orig_number
