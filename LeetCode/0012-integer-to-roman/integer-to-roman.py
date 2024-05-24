def to_roman_numbers(num, result=''):
    if num >= 1000:
        return to_roman_numbers(num - 1000, result + 'M')
    if num >= 900:
        return to_roman_numbers(num - 900, result + 'CM')
    if num >= 500:
        return to_roman_numbers(num - 500, result + 'D')
    if num >= 400:
        return to_roman_numbers(num - 400, result + 'CD')
    if num >= 100:
        return to_roman_numbers(num - 100, result + 'C')
    if num >= 90:
        return to_roman_numbers(num - 90, result + 'XC')
    if num >= 50:
        return to_roman_numbers(num - 50, result + 'L')
    if num >= 40:
        return to_roman_numbers(num - 40, result + 'XL')
    if num >= 10:
        return to_roman_numbers(num - 10, result + 'X')
    if num >= 9:
        return to_roman_numbers(num - 9, result + 'IX')
    if num >= 5:
        return to_roman_numbers(num - 5, result + 'V')
    if num >= 4:
        return to_roman_numbers(num - 4, result + 'IV')
    if num >= 1:
        return to_roman_numbers(num - 1, result + 'I')
    return result


class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """

        return to_roman_numbers(num)
