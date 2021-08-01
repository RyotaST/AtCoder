N = gets.to_i
s = Array.new(N){gets.chomp}
s.reverse.each do |n1|
  if n1 == a[0]
    if n1 == "AND"
      box.push(["T",0])
    else
      box.push(["T",0])
      box.push(["F",0])
    end
  end
  judge = box.pop
  if 
