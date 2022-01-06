N,M,K=map(int,input().split())
list=list(map(int,input().split()))
list.sort(reverse=True)

a= M//(K+1)
b= M%(K+1)
sum= (list[0]*K+list[1])*a+(list[0]*b)
print(sum)

