def solve(arr):
    t=len(arr)
    p, m, z = 0, 0, 0
    for n in arr:
        if n>0:
            p+=1
        elif n<0:
            m+=1
        else:
            z+=1
    print("{:.6f}".format(p/t))
    print("{:.6f}".format(m/t))
    print("{:.6f}".format(z/t))

if __name__ == '__main__':
    n = int(input().strip())
    arr = list(map(int, input().rstrip().split())) 
    solve(arr)