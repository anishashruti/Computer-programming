# your code goes here
def sumOfDigits(num):
    numer=num
    sl=0
    while(numer>0):
        rem=numer%10
        numer=int(numer/10)
        sl=sl+rem      
    return(sl)
   
s=[]
suml=[]
a=int(input())
num=800
count=-1
i=1;
while(num<a):
    no=sumOfDigits(num)
    suml.append(no)
    print(num,end=' ')
    num=num+2*i
    i=i+1
print()
print(len(suml)-1)