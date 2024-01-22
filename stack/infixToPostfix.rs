use std::collections::HashMap;

fn main()
{

let precedence : HashMap <char , u8> = HashMap::from([('+',0),('-',0),('*',1),('/',1)]);

let mut input_line = String::new();
println!("Enter the infix expression :");
std::io::stdin().read_line(&mut input_line).expect("Error while reading");

let mut operator_stack : Vec<char> = Vec::new();

let mut output_stream = String::from ("Corresponding Postfix : ");
let mut val : u8;
let mut operator_buffer : char;

for char_val in input_line.chars()
{
 val = char_val as u8;
 if val == 13 || val == 10 {continue;}
 
 match val 
 {
  48..=57 => {val -=48 ; output_stream.push_str(&val.to_string());},
  42 | 43 | 45 | 47 => {
   operator_buffer = val as char;
   loop {
     if operator_stack.len() == 0 {operator_stack.push(operator_buffer); break;}
     else if precedence.get(&operator_stack[operator_stack.len()-1]) >= precedence.get(&operator_buffer)
     {output_stream.push_str(&operator_stack[operator_stack.len()-1].to_string()); 
      operator_stack.pop();
     }
     else {operator_stack.push(operator_buffer); break;}
   } 
  }
   
  _ => {println!("Error in the infix notation supplied "); std::process::exit(1);}
 }
}

while operator_stack.len() != 0
{
 output_stream.push_str(&operator_stack[operator_stack.len()-1].to_string());
 operator_stack.pop();
}



println!("{}" , output_stream);
}