'''
You are given an array consisting of n integers a1,a2,..an. 
Find the maximum value of xor of sum of 2 disjoint subarrays 
i.e maximize ( sum(l1,r1) xor sum(l2,r2) )
where 1 ≤ l1 ≤ r1 < l2 ≤ r2 ≤ n.
Note: sum(l,r) denotes sum of elements from indices l to r both inclusive.

Input Format
First line contains number n denoting the number of array elements.
Second line contains n integers denoting a1,a2,..an.

Output Format
Output the required value.

'''
length=int(raw_input())
arr=[int(i) for i in raw_input().split()]

total=0

for i in range(length):
    total=total+arr[i]

left_sum=0
right_sum=total

maximum=0
i=0

while(i<length):
    left_sum=arr[i]+left_sum
    right_sum=right_sum-arr[i]
    if(maximum < (left_sum  ^ right_sum)):
        maximum = (left_sum ^ right_sum)
    i=i+1

print maximum