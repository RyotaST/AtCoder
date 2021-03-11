X,N = gets.split.map(&:to_i)
p = gets.split.map(&:to_i)
box = (0..101).to_a - p
box.sort!
result1 = box.bsearch{|x| x>=X}
result2 = box[box.find_index(result1)-1]
if (result1-X) == (X-result2)
  puts result2
elsif (result1-X) < (X-result2)
  puts result1
else
  puts result2
end