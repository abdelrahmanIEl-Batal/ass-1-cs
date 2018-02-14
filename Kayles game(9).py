
a=[]
x=int(input("Enter arbitrary number"))
for i in range(1,x+1):
    a.append(i%10)
print("Numbers are",a)
player =1
check=0
while True:
    
    print("Player",player,"How many numbers to remove 1 or 2?")
    while True:
        
        n1=int(input())
        if n1==1 or n1==2:
            break
        else:
            print("Numbers should be 1 or 2 , please enter again..")
    if n1==1:
        print("Player",player," : ")
        p1=int(input())
        del a[p1-1]
        a.insert(p1-1,' ')
        print(a)
        for i in range(0,10):
            if a.count(i)==0:
                check=1
            else:
                check =0
                break
    elif n1==2:
        while True:
            print("Player",player," : ")
            p1=int(input())
            p2=int(input())
            if p1-p2==1 or p1-p2==-1:
                break
            else:
                print("Numbers are not adjacent")
        del a[p1-1]
        a.insert(p1-1,' ')
        del a[p2-1]
        a.insert(p2-1,' ')
        print(a)
        for i in range(0,10):
            if a.count(i)==0:
                check=1
            else:
                check =0
                break
    if check==1:
        print("Player",player,"wins!")
        break
    if player==1:
            player=2
    elif player==2:
            player=1
    
    
