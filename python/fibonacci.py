def memoFib(n):
    if n == 0:
        return []
    if n == 1:
        return [0]
    
    ans = [0, 1]
    for i in range(2, n):
        ans.append(ans[i-1] + ans[i-2])  # Use previously calculated values
    return ans

def main():
    n = int(input("Enter num of fibonacci numbers you want: "))
    result = memoFib(n)
    for num in result:
        print(num, end=' ')

if __name__ == "__main__":
    main()