#developer at Imperial Arkon

def satisfyFor(distance,aggrCows):
	count,prev,i=1,arr[0],1
	while i<n:
		if abs(arr[i]-prev)>=distance:
			count+=1
			if count==aggrCows: return True
			prev=arr[i]
		i+=1
	return False

def satisfyingDistances(low, high,aggrCows):	
	while low<=high:
		mid = int((low+high)/2)
		if satisfyFor(mid, aggrCows):
			ans=mid
			low=mid+1
		elif not satisfyFor(mid, aggrCows): high=mid-1
	return ans

arr=[]
t = int(input())
while t:
	arr = []
	n,aggrCows = [int(x) for x in input().split()]
	for i in range(n):
		arr.append(int(input()))
	arr.sort()
	print(satisfyingDistances(0,max(arr)-1,aggrCows))
	t-=1

