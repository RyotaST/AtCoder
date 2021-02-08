N = gets.to_i
a = gets.chomp.split.map(&:to_i)
result = 0
p a

a.inject do |b,c|
  result += b*c
  b += c
end
p result % (10**9+7)