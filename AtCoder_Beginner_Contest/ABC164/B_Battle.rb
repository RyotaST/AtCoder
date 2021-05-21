a,b,c,d = gets.split.map(&:to_i)
count = 0

while a>0 && c>0
  count % 2 == 0 ? c -= b : a -= d 
  count += 1
end

puts (count % 2 == 0) ? "No" : "Yes"