s = gets.chomp.chars
t = gets.chomp.chars
result = 0

s.size.times do |n|
  result += 1 if s[n] != t[n]
end

puts result