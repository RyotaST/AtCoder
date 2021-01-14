n = gets.to_i
d = []
while n > 0
  d << gets.to_i
  n -= 1
end
count = 0
max_num = 0

while !(d.empty?)
  max_num = d.max
  d.delete(d.max)
  count += 1
end

puts count