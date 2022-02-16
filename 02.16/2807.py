'''
프로그램명 : 2807.py
설명 : 문자열에서 숫자 찾기
작성일시 : 2022.02.16
작성자 : 정소영 
'''

arr=[]
num=0
n=int(input())
for i in range(n):
    a=input()
    for j in range(len(a)):
        if ord(a[j])>47 and ord(a[j])<58:
            num*=10
            num+=ord(a[j])-48
            if (j+1==len(a)):
                arr.append(num)
                num=0
        else:
            if j>0 and ord(a[j-1])>47 and ord(a[j-1])<59:
                arr.append(num);
                num=0
arr.sort()

for i in range(len(arr)):
    print(arr[i])

'''
2
lo3za4
01
-----
1
3
4
'''
