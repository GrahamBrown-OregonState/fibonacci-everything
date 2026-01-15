import GHC.Base (VecElem(Int16ElemRep))
fibonacci :: Int -> [Int]
fibonacci n
    | n == 0 = []
    | n == 1 = [0]
    | otherwise = [0, 1] ++ [fibonacci (n - 1) + fibonacci (n - 2)]
main :: IO ()
main = do
    print "Enter num of fibonacci numbers you want: "
    input <- getLine
    let num = read input :: Int
    print (fibonacci num)