fn fibonacci(n: u32) -> Vec<u32> { // takes an unsigned 32-bit integer as input, returns a vector of unsigned 32-bit integers
    match n {
        0 => vec![],
        1 => vec![0],
        _ => {
            let mut result = vec![0, 1];
            for i in 2..n {
                let next = result[(i - 1) as usize] + result[(i - 2) as usize];
                result.push(next);
            }
            result
        }
    }
}

fn main() {
    println!("Enter a number:");
    let mut input = String::new();
    std::io::stdin().read_line(&mut input);
    let n: u32 = input.trim().parse().unwrap();
    let mut i = 0;
    let nums : Vec<u32> = fibonacci(n);
    while i < n {
        println!("{} ", nums[i as usize]);
        i += 1;
    }
}