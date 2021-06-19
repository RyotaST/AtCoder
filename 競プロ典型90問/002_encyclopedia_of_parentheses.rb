N = gets.to_i
strings = Array.new
(N/2).times do
  strings << "(" << ")"
end
strings.sort!
p strings