N, K = gets.split.to_i
result = N

if K == 0
  puts result
  exit
else
  K.times do |n|
    g1 = result.to_s.chars
    g1.sort!
    g2 = g1
    g2.reverse!
    result = (g1.join.to_i) - (g2.join.to_i)
end

puts result
