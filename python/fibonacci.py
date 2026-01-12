def findFib(n):    
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return findFib(n-2) + findFib(n-1)


def memoFib(n):
    ans = []
    for i in range(n):
        ans.append(findFib(i))
    return ans

def main():
    n = input("Enter num of fibonacci numbers you want: ")
    result = memoFib(n)
    for num in result:
        print(num, end=' ')

if __name__ == "__main__":
    main()