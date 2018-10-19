use std::io;
fn main(){
    let mut n = String::new();
    println!("Enter an integer: ");
    io::stdin()
        .read_line(&mut n)
        .expect("failed to read input.");
    let n = n.trim().parse::<i32>().expect("invalid input");

    println!("{} is a prime: {}", n, is_prime(n));
}

fn is_prime(x: i32) -> bool {
    if x <= 1
    {
        return false;
    }
    let mut i: i32 = 2;
    while i < ((x as f64).sqrt().ceil() as i32 + 1)
    {
        if x % i == 0 || x % (i + 1) == 0
        {
            return false;
        }
        i += 2;
    }
    return true;
}