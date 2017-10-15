import random
m,n=int,input().split()
if m<4 and n<5:print('m i n ne ydovltvoriat ysloviu')
else:
#cozdanie randomnoy matrizy
    a=[]
    for i in range(m):
        b=[random.randint(0,10) for x in range(n)]
        a.append(b)
    #peremeshenie strok
    for i in range(n):
        a[0][i],a[m-1][m-i-1]=a[m-1][m-i-1],a[0][i]
    mi=min(a[0]);mi_stroka=0;mi_stolbez=a[0].index(mi)
    #poisk minimuma
    for i in range(1,m):
        if mi>min(a[i]):
            mi=min(a[i])
            mi_stroka=i
            mi_stolbez=a[i].index(mi)
    a1=[]
    #udolinie stroki i stolbza
    for i in range(m):
        if i!=mi_stroka:
            b=[]
            for j in range(n):
                if  j!=mi_stolbez:b.append(a[i][j])
            a1.append(b)
    m-=1;n-=1
    #sozdanie 2 matrizy
    a2=[]
    x=input().split();m2=0;n2=0
    while x[n2]!=".":
        b=[];
        while x[n2].isdigit():
            b.append(x[n2])
            n2+=1
        if x[n2]==',':n2+=1   
        a2.append(b)
        m2+=1
    n2=n2//m2
    #peremnozenie matriz
    if n==m2:
        a12=[]
        for i in range(m):
            b=[]
            for j in range (n2):
                c=0
                for k in range(n):
                    c+=int(a1[i][k])*int(a2[k][j])
                b.append(c)
            a12.append(b)
        print(a12)
    else:print('no')   