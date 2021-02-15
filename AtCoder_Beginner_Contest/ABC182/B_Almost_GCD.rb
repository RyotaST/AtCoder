require 'set'

N = gets.to_i
a = gets.split.map(&:to_i)
count = 0
result_count = 0
result_value = 0

(2..a.max).each do |n1|
  a.each do |n2|
    count += 1 if (n2 % n1) == 0
  end
  if count > result_count
    result_count = count
    result_value = n1
  end
  count = 0
end

p result_value