N = gets.to_i
a = Array(N){gets.split.map(&:to_i)}
a.reverse
result = 0
sum = 0
a.each do |n|
  result += (((N-1)*n**2)-(2*sum)*n)
  sum += n
end

puts result