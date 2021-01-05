# “Greatest Common Factor"
#  Given two integers, create rGCF(num1,num2) to recursively determine Greatest Common Factor (the largest integer dividing evenly into both). 
#  Greek mathematician Euclid demonstrated these facts:
# 1)      gcf(a,b) == a, if a == b;
# 2)      gcf(a,b) == gcf(a-b,b), if a>b;
# 3)      gcf(a,b) == gcf(a,b-a), if b>a.”

def rGCF(num1,num2):
    if num1 == num2:
        return num1
    elif num1 > num2:
        return rGCF(num1-num2,num2)
    elif num2>num1:
        return rGCF (num1, num2-num1)
print(rGCF(8, 6))
