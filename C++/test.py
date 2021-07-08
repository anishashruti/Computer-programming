class UserMainCode(object):
    @classmethod
    def itsThere(cls,input1,input2,input3):
        n=input1
        grid=input2
        k=input3
        ans=[]
        for r,row in enumerate(grid):
            for i,item in enumerate(row):
                f=0
                for x in range(k):
                    try:
                        t=grid[r+x][i]
                    except:
                        continue
                    if(item==grid[r+x][i]):
                        f+=1
                if(f==k):
                    ans.append(item)
                
                f=0
                for x in range(k):
                    try:
                        t=grid[r][i+x]
                    except:
                        continue
                    if(item==grid[r][i+x]):
                        f+=1
                if(f==k):
                    ans.append(item)

                f=0
                for x in range(k):
                    try:
                        t=grid[r+x][i+x]
                    except:
                        continue
                    if(item==grid[r+x][i+x]):
                        f+=1
                if(f==k):
                    ans.append(item)

        if(len(ans)>0):
            ans.sort()
            return ans[0]
        else:
            return -1

x=UserMainCode()
a=x.itsThere(5,[[3,5,3,9,5],[5,2,2,1,8],[5,4,3,1,9],[5,4,7,6,4],[1,2,5,9,1]],3)
print(a)