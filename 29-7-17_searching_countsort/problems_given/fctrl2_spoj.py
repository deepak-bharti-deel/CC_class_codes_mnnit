dp = [0]*101

def fact(n):
	if n==1: return 1
	elif dp[n]: return dp[n]
	else:
		dp[n] = n*fact(n-1)
		return dp[n] 

for i in range(int(input())): print(fact(int(input())))