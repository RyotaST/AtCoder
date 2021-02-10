N = gets.to_i
a = gets.split.map(&:to_i)

value = a[0]
result = 0
a.each do |n|
  if n <= value
    result += value-n
  else
    value = n
  end
end

p result