N = gets.chomp.to_i
strings1 = []
strings2 = []

N.times do |n|
  n = gets.chomp
  if n[0] == "!"
    strings1 << n[1..-1]
  else
    strings2 << n
  end
end

sum = strings1 & strings2

puts sum.empty? ? 'satisfiable' : sum[0]