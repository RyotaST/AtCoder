N = gets.to_i
a = gets.split.map(&:to_i)
box = []
sum = 0
result = 0
l = 0
r = 0
x = 0
result = 0

1.upto(a.size) do |n1|
  a.each_cons(n1) do |n2|
    result = n2.min * n2.size if n2.min * n2.size > result
  end
end

puts result