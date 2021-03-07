N = gets.to_i
l = gets.split.map(&:to_i)
result = 0

l.combination(3).to_a.each do |n|
  if n[0] != n[1] && n[1] != n[2] && n[2] != n[0] && n[0] + n[1] > n[2] && n[1] + n[2] > n[0] && n[2] + n[0] > n[1]
    result += 1
  else
    next
  end
end

puts result