n, x, t = gets.split.map(&:to_i)
result = 0
while n-x > 0
  result += t
  n -= x
end
result += t
puts result