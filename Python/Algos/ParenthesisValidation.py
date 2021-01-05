# Create a function that, given an input string str, returns a boolean whether parentheses in str are valid. Valid sets of parentheses always open before they close, for example. For "Y(3(p)p(3)r)s", return true. Given "N(0(p)3", return false: not every parenthesis is closed. Given "N(0)t )0(k", return false, because the underlined ")" is premature: there is nothing open for it to close.”

#create a function that takes a string
# returns boolean===> IF paranthesis are valid

def badParent(inputString):
    openParent= 0
    closeParent= 0
    for i in range(0,len(inputString),1):
        if inputString[i]=='(':
            openParent+=1
        if inputString[i] ==')':
            closeParent+=1
        if openParent < closeParent:
            return False
    if openParent == closeParent:
        return True
    else:
        return False
print(badParent("Y(3(p)p(3)r)s"))
print(badParent("N(0(p)3"))
print(badParent(")("))





