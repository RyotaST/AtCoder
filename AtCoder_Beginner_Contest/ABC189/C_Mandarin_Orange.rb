n = gets.to_i
a = gets.split.map(&:to_i)
result = 0

n.times do |n1|
  min = a[n1]
  n1.upto(n-1) do |n2|
    min = a[n2] if min > a[n2]
    break if min * n-n1 < result
    result = min * (n2-n1+1) if min * (n2-n1+1) > result
  end
end

puts result