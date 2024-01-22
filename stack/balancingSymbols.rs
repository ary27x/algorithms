fn main()
{
 let mut input_line = String::new();

 println!("Enter the data : ");
 std::io::stdin().read_line(&mut input_line).expect("Error while reading the data");

 let mut data_stack : Vec<u8>= Vec::new();
 let mut av : u8;
 let mut req : u8;
 for val in input_line.chars()
 {
  av = val as u8;
  if av == 91 || av == 40 || av == 123
   {data_stack.push(av);}
  if av == 93 || av == 41 || av == 125
   {
    if data_stack.len() == 0
     {
      println!("Error : The given string is not balanced ");
      std::process::exit(0);
     }
    req = if av == 41 {av - 1} else {av-2};
    if data_stack[data_stack.len()-1] != req
     {
      println!("Error : The given string is not balanced ");
      std::process::exit(0);
     }
    data_stack.pop();
   }   
 }
 if data_stack.len() != 0
 {
  println!("Error : The given string is not balanced ");
 }
 else
 {
  println!("Success : the given string is balanced ");
 }

}