def from_roman_numbers(string, num=0):
    if string == "":
        return num
    if string[-2::] == "CM":
        return from_roman_numbers(string[:-2:], num + 900)
    if string[-2::] == "CD":
        return from_roman_numbers(string[:-2:], num + 400)
    if string[-2::] == "XC":
        return from_roman_numbers(string[:-2:], num + 90)
    if string[-2::] == "XL":
        return from_roman_numbers(string[:-2:], num + 40)
    if string[-2::] == "IX":
        return from_roman_numbers(string[:-2:], num + 9)
    if string[-2::] == "IV":
        return from_roman_numbers(string[:-2:], num + 4)
    if string[-1] == "M":
        return from_roman_numbers(string[:-1:], num + 1000)
    if string[-1] == "D":
        return from_roman_numbers(string[:-1:], num + 500)
    if string[-1] == "C":
        return from_roman_numbers(string[:-1:], num + 100)
    if string[-1] == "L":
        return from_roman_numbers(string[:-1:], num + 50)
    if string[-1] == "X":
        return from_roman_numbers(string[:-1:], num + 10)
    if string[-1] == "V":
        return from_roman_numbers(string[:-1:], num + 5)
    if string[-1] == "I":
        return from_roman_numbers(string[:-1:], num + 1)


class Solution(object):

    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """

        return from_roman_numbers(s)
