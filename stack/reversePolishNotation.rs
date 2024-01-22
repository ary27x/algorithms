fn main()
{
let mut input_line = String::new();

println!("Enter the postfix expression : ");
std::io::stdin().read_line(&mut input_line).expect("Error while reading the statement");

let mut a_val : i64;
let mut buffer : i64;
let mut data_set : Vec<i64> = Vec::new();

for current in input_line.chars()
{
 a_val = current as i64;
 if a_val == 10 || a_val == 13 {continue;} 
 match a_val
 {
   48..=57 => data_set.push(a_val - 48),
   42 | 43 | 45 | 47 => {
    if data_set.len() < 2
    {
     println!("Error in the notation provided -> out of operands ");
     std::process::exit(1);
    }

    buffer = if a_val == 43 {data_set[data_set.len()-1] + data_set[data_set.len()-2]}
             else if a_val == 45 {data_set[data_set.len()-1] - data_set[data_set.len()-2]} 
             else if a_val == 42 {data_set[data_set.len()-1] * data_set[data_set.len()-2]} 
             else {data_set[data_set.len()-1] / data_set[data_set.len()-2]} ;

    data_set.pop(); data_set.pop();
    data_set.push(buffer);
   }
   _ => {
    let convertible : u8 = a_val as u8;
    println!("Error in the notation provided -> invalid char : '{}' ; (only numbers and +,-,*,/ allowed)" , convertible as char);
    std::process::exit(1);
   }
 }
}

if data_set.len() > 1
{
 println!("Error in the notation provided -> extra operands supplied ");
 std::process::exit(1);
}

let result : i64  = data_set[0];
println!("The result of the expression is : {}" , result);

}