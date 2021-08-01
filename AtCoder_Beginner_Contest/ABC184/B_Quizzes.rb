N, x = gets.split.map(&:to_i)
S = gets.chomp.chars

S.each do |n|
  n == 'o' ? x+=1 : x-=1
  x = 0 if x < 0
end

puts x