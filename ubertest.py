class Solution:
    def uniquePaths(self, n, m, a):
        col=0
        row=0
        state=0
        path=0
        for i in range(2):
            while(col<m-1):
                if a[row][col] == 1:
                    col=col+1
                else:
                    state=0
    
            while(row<n-1):
                if a[row][col] == 1:
                    row=row+1
                else:
                    state=0
                    
            if (col==m-1 or row==n-1) and state==1:
                path=path+1
        
        return path    

if __name__ == '__main__':
    t= int(input())
    for _ in range(t):
        n,m = map(int,input().split())

        grid=[]
        for i in range(n):
            col =list(map(int,input().split()))
            grid.append(col)
        
        ob =Solution()
        print(ob.uniquePaths(n,m,grid))