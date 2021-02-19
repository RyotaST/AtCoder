N = gets.to_i
a = gets.split.map(&:to_i)
box = []
sum = 0
result = 0
l = 0
r = 0
x = 0

0.upto(a.size-1) do |n1|
  x = a[n1]
  0.upto(n1) do |n2|
    x = a[n2]) if a[n2] < a[n1]
  end
  sum = 
  result = sum
