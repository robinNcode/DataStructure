import array

search=[]

size=int(input("How many numbers Do u want to enter :"))

for i in range(size):
    temp=int(input("Enter a number:"))
    search.append(temp)
    
beg=0
end=size
mid=int((beg+end)/2)

item=int(input("Enter a search item:"))

while beg<=end and search[mid]!=item:
    if item<search[mid]:
        end=mid-1
    else:
        beg=mid+1
    mid=int((beg+end)/2)
if search[mid]==item:
    print("Search item found at position",mid+1,"!!")
else:
    print("Searh item was not founded !!")
