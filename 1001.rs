use std::io;

fn main() {

    let mut number_one = String::new();
    io::stdin().read_line(&mut number_one).unwrap();
    let mut second_number = String::new();
    io::stdin().read_line(&mut second_number).unwrap();
    let sum: i32 = number_one.trim_end().parse::<i32>().unwrap() + second_number.trim_end().parse::<i32>().unwrap();
    println!("X = {}", sum);    
}
