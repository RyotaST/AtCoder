s = gets.chomp.chars
t = gets.chomp.chars
count = 0
result = 0
t_size_count = 0

(s.size-t.size+1).times do |n1|
  count = 0
  t_size_count = 0
  n1.upto(n1+t.size-1) do |n2|
    count += 1 if s[n2] == t[t_size_count]
    t_size_count += 1
  end
  result = count if count > result
end

p t.size - result