# String: Is Palindrome (something spelled forwards is spelled the same way backwards)
# Create a function that returns a boolean whether the string is a strict palindrome. For "a x a" or "racecar", return true. Do not ignore spaces, punctuation and capitalization: if given "Dud" or "oho!", return false.”
    # leftside = stringInput[0]
    # rightside = stringInput[len(stringInput)-1]
def pal(stringInput):
    for i in range (0,len(stringInput)//2,1):
        if stringInput[i] != stringInput[len(stringInput)-1-i]:
            return False
        else:
            return True
print(pal("racecar"))

#OORRRR THIS WAY, above is more usable and compares left and right values one at a time

def palindrome (stringInput):
    newstring = ""
    for i in range(len(stringInput)-1, -1, -1):
        newstring += stringInput[i]
    if newstring != stringInput:
        return (False)
    elif newstring == stringInput:
        return (True)
    return newstring
print(palindrome('tacocat'))

#THE VALUE OF A FUNCTION CALL IS WHATEVER IT RETURNS!!!!!!!!!!!!!!!!!

