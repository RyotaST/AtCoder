require 'set'

N = gets.to_i
a = gets.split.map(&:to_i)
s = Set.new
count = 0
result = []

a.each do |n1|
  1.upto(n1) do |n2|
    s << n2 if n1 % n2 == 0
  end
end

s.each do |n3|
  a.each do |n4|
    count += 1 if n4 % n3 == 0
  end
  result.push(count, n4)