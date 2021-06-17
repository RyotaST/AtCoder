n,l = gets.split.map(&:to_i)
k = gets.to_i
a = gets.split.map(&:to_i)
result = 0
min = 0
left = 0

a.combination(k) do |n1|
  n1.push(l)
  n1.sort.each do |n2|
    if min == 0
      min = n2
    else
      min = n2-left if min > n2-left
    end
    left = n2
  end
  result = min if min > result
  min = 0
end

puts result