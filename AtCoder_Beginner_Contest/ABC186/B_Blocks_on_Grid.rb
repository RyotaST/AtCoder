H, W = gets.split.map(&:to_i)
total_ary = []
H.times{total_ary.push(gets.split.map(&:to_i))}
result = 0
min = total_ary[0][0]

total_ary.each do |x|
  min = x.min if min > x.min
end

total_ary.each do |n1|
  n1.each do |n2|
    result += (n2-min) if min < n2
  end
end

puts result
